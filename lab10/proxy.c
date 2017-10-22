/*
 * proxy.c - CS:APP Web proxy
 * 
 * Chen Jun,5140379064,897162163@qq.com
 *
 * 1.本代理服务器基于多线程实现（符合detach要求），从客户端获得请求，经过处理后转发给服务器端，并在代理中存储访问日志和缓存。
 * 2.写日志和缓存时，使用了信号量，保证不因为多线程而导致某些错误的发生
 * 3.对open_clientfd函数进行了重写，保证其线程安全
 * 4.访问日志时记录的size包括头的长度（虽然发现不包括头的长度得分依然正确），在缓存中也包含头（这导致某些文件无法直接打开（比如jpg），但若不包含头的话测试结果有误）
 * 5.对SIGPIPE信号有IGNORE
 */ 

#include "csapp.h"
#include "string.h"
/*
 * Function prototypes
 */
int parse_uri(char *uri, char *target_addr, char *path, int  *port);
void format_log_entry(char *logstring, struct sockaddr_in *sockaddr, char *uri, int size);
void doit(int connfd,struct sockaddr_in *sockaddr);
void write_log(struct sockaddr_in *sockaddr, char *uri, int size);
void read_requesthdrs(rio_t *rio, int fd);
void *thread(void *vargp);
int open_clientfd_ts(char *hostname, int port);
int Open_clientfd_ts(char *hostname, int port);


/* 
 * para_t - 用于thread函数的传参 
 */

typedef struct{
  struct sockaddr_in clientaddr;
  int connfd;
}para_t;

static sem_t log_mutex;         //用于日志时的锁
static sem_t open_mutex;        //用于open_clientfd_ts的锁
static sem_t cache_mutex;       //用于写缓存时的锁

/* 
 * main - Main routine for the proxy program 
 */

int main(int argc, char **argv)
{
    int listenfd,connfd,port;
    socklen_t clientlen;
    struct sockaddr_in clientaddr;
    para_t* parameter;
    pthread_t tid;
    Signal(SIGPIPE,SIG_IGN);        //将SIGPIPE忽略
    Sem_init(&log_mutex,0,1);
    Sem_init(&open_mutex,0,1); 
    Sem_init(&cache_mutex,0,1);
    /* Check arguments */
    if (argc != 2) {
	fprintf(stderr, "Usage: %s <port number>\n", argv[0]);
	exit(0);
    }
    port = atoi(argv[1]);
    listenfd = Open_listenfd(port);
    while(1){
    clientlen = sizeof(clientaddr);
    connfd = Accept(listenfd,(SA *)&clientaddr,&clientlen);
    parameter = malloc(sizeof(para_t));
    parameter->clientaddr = clientaddr;
    parameter->connfd = connfd;  
    Pthread_create(&tid,NULL,thread,parameter);
    }
}

/* 
 * thread - 由main函数调用， 线程函数，在线程中处理相应内容
 */

void *thread(void *vargp)
{
   para_t para = *((para_t*)vargp);
   Pthread_detach(pthread_self());
   Free(vargp);
   doit(para.connfd,&para.clientaddr);
   Close(para.connfd);
   return NULL;
}

/* 
 * write_log - 写日志函数，用于书写代理端的访问日志 
 */

void write_log(struct sockaddr_in *sockaddr, char *uri, int size)
{
  int logfd;
  char logstring[MAXLINE];
  rio_t rio;
  format_log_entry(logstring,sockaddr, uri,size);
  logfd = Open("proxy.log",O_RDWR|O_CREAT|O_APPEND,DEF_MODE);
  Rio_readinitb(&rio,logfd);
  P(&log_mutex);
  Rio_writen(logfd,logstring,strlen(logstring));    //写日志时上锁
  V(&log_mutex);
}

/* 
 * read_requesthdrs - 读取头的函数，同时将头写到fd端 
 */

void read_requesthdrs(rio_t *rio, int fd)
{
   char buf[MAXLINE];
   Rio_readlineb(rio,buf,MAXLINE);
   while(strcmp(buf,"\r\n"))
   {
     Rio_writen(fd,buf,strlen(buf));
     Rio_readlineb(rio,buf,MAXLINE);    
   }
   Rio_writen(fd,buf,strlen(buf));              
}

/* 
 * doit - 在线程函数中被调用，从客户端读入信息，转发给服务器端，再把反馈回发给客户端，同时存储访问日志和缓存 
 */

void doit(int connfd,struct sockaddr_in *sockaddr)
{
   char buf[MAXLINE],path[MAXLINE],method[MAXLINE],uri[MAXLINE],version[MAXLINE],hostname[MAXLINE],pathname[MAXLINE];
   int port,clientfd,fd; 
   size_t n = 0, temp;
   rio_t rio,rio_send;
   Rio_readinitb(&rio,connfd);
   Rio_readlineb(&rio,buf,MAXLINE);
   sscanf(buf,"%s %s %s",method,uri,version);
   parse_uri(uri,hostname,pathname,&port);
   strcpy(path,"cache/");
   strcat(path,pathname);
   if((fd = open(path,O_RDONLY,DEF_MODE)) >= 0)
   {
       P(&open_mutex);
       Rio_readinitb(&rio_send,fd);
       while((temp = Rio_readlineb(&rio_send,buf,MAXLINE))!=0)    //若已有缓存，直接从缓存中读
       {
          n += temp;  
          Rio_writen(connfd,buf,temp);               
       }
       V(&open_mutex);
   }
   else                                                           //若没有缓存，访问服务器后写缓存
   {
   fd = Open(path,O_RDWR|O_CREAT,DEF_MODE);
   clientfd = Open_clientfd_ts(hostname,port);
   Rio_readinitb(&rio_send,clientfd);
   sprintf(buf,"%s /%s %s\r\n",method,pathname,version); 
   Rio_writen(clientfd,buf,strlen(buf));
   read_requesthdrs(&rio,clientfd);
   //read_requesthdrs(&rio_send,connfd);
   P(&cache_mutex);
   while((temp = Rio_readlineb(&rio_send,buf,MAXLINE))!=0)
   {
      n += temp; ;   
      Rio_writen(connfd,buf,temp);
      Rio_writen(fd,buf,temp);
   }
   V(&cache_mutex);
    close(clientfd);
   }
   write_log(sockaddr,uri,n);                           //写日志
   close(fd);
}

/* 
 * open_clientfd_ts - 线程安全的open_clientfd函数 
 */

int open_clientfd_ts(char *hostname, int port)
{
   int clientfd;
    struct hostent *hp;
    struct hostent host;
    struct sockaddr_in serveraddr;
    if ((clientfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	return -1; /* check errno for cause of error */

    /* Fill in the server's IP address and port */
    P(&open_mutex);
    if ((hp = gethostbyname(hostname)) == NULL){
        V(&open_mutex);
	return -2; /* check h_errno for cause of error */
    }
    host = *hp;                                                //获得hostent实体，而不是指向static变量的指针
    V(&open_mutex);    
    bzero((char *) &serveraddr, sizeof(serveraddr));
    serveraddr.sin_family = AF_INET;
    bcopy((char *)host.h_addr_list[0], 
	  (char *)&serveraddr.sin_addr.s_addr, host.h_length);
    serveraddr.sin_port = htons(port);
    /* Establish a connection with the server */
    if (connect(clientfd, (SA *) &serveraddr, sizeof(serveraddr)) < 0)
	return -1;
    return clientfd;
}


/* 
 * Open_clientfd_ts - 线程安全的Open_clientfd函数 
 */

int Open_clientfd_ts(char *hostname, int port) 
{
    int rc;

    if ((rc = open_clientfd_ts(hostname, port)) < 0) {
	if (rc == -1)
	    unix_error("Open_clientfd_ts Unix error");
	else        
	    dns_error("Open_clientfd_ts DNS error");
    }
    return rc;
}

/*
 * parse_uri - URI parser
 * 
 * Given a URI from an HTTP proxy GET request (i.e., a URL), extract
 * the host name, path name, and port.  The memory for hostname and
 * pathname must already be allocated and should be at least MAXLINE
 * bytes. Return -1 if there are any problems.
 */
int parse_uri(char *uri, char *hostname, char *pathname, int *port)
{
    char *hostbegin;
    char *hostend;
    char *pathbegin;
    int len;

    if (strncasecmp(uri, "http://", 7) != 0) {
	hostname[0] = '\0';
	return -1;
    }
       
    /* Extract the host name */
    hostbegin = uri + 7;
    hostend = strpbrk(hostbegin, " :/\r\n\0");
    len = hostend - hostbegin;
    strncpy(hostname, hostbegin, len);
    hostname[len] = '\0';
    
    /* Extract the port number */
    *port = 80; /* default */
    if (*hostend == ':')   
	*port = atoi(hostend + 1);
    
    /* Extract the path */
    pathbegin = strchr(hostbegin, '/');
    if (pathbegin == NULL) {
	pathname[0] = '\0';
    }
    else {
	pathbegin++;	
	strcpy(pathname, pathbegin);
    }

    return 0;
}

/*
 * format_log_entry - Create a formatted log entry in logstring. 
 * 
 * The inputs are the socket address of the requesting client
 * (sockaddr), the URI from the request (uri), and the size in bytes
 * of the response from the server (size).
 */
void format_log_entry(char *logstring, struct sockaddr_in *sockaddr, 
		      char *uri, int size)
{
    time_t now;
    char time_str[MAXLINE];
    unsigned long host;
    unsigned char a, b, c, d;

    /* Get a formatted time string */
    now = time(NULL);
    strftime(time_str, MAXLINE, "%a %d %b %Y %H:%M:%S %Z", localtime(&now));

    /* 
     * Convert the IP address in network byte order to dotted decimal
     * form. Note that we could have used inet_ntoa, but chose not to
     * because inet_ntoa is a Class 3 thread unsafe function that
     * returns a pointer to a static variable (Ch 13, CS:APP).
     */
    host = ntohl(sockaddr->sin_addr.s_addr);
    a = host >> 24;
    b = (host >> 16) & 0xff;
    c = (host >> 8) & 0xff;
    d = host & 0xff;


    /* Return the formatted log entry string */
    sprintf(logstring, "%s: %d.%d.%d.%d %s %d ", time_str, a, b, c, d, uri, size);    //添加size
}


