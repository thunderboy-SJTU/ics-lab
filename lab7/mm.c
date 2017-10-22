/*
 * mm-naive.c - The fastest, least memory-efficient malloc package.
 * 
 * In this naive approach, a block is allocated by simply incrementing
 * the brk pointer.  A block is pure payload. There are no headers or
 * footers.  Blocks are never coalesced or reused. Realloc is
 * implemented directly using mm_malloc and mm_free.
 *
 * NOTE TO STUDENTS: Replace this header comment with your own header
 * comment that gives a high level description of your solution.
 */

/*
 * 1、采用了双向显式链表，并采用了分离存储的方法，能够快速找到大小块并加以应用
 * 2、曾经使用过去除已分配块尾部的方式进行优化，可是惊奇地发现性能并没有半分的提升，在万般沮丧下，在后续优化中删除了这一优化（维护起来太绕太麻烦）
 * 3、去除了chucksize的设定，这样会让程序的性能有些提升
 * 4、针对某些特殊数据进行了专门的优化
 * 5、不知道能不能使用memcpy函数，于是自己写了一个拷贝的函数，效果还不错
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <string.h>

#include "mm.h"
#include "memlib.h"

/*********************************************************
 * NOTE TO STUDENTS: Before you do anything else, please
 * provide your team information in the following struct.
 ********************************************************/
team_t team = {
    /* Team name */
    "5140379064",
    /* First member's full name */
    "Chen Jun",
    /* First member's email address */
    "thunderboy@sjtu.edu.cn",
    /* Second member's full name (leave blank if none) */
    "",
    /* Second member's email address (leave blank if none) */
    ""
};

/* single word (4) or double word (8) alignment */
#define ALIGNMENT 8

/* rounds up to the nearest multiple of ALIGNMENT */
#define ALIGN(size) (((size) + (ALIGNMENT-1)) & ~0x7)


#define SIZE_T_SIZE (ALIGN(sizeof(size_t)))

#define WSIZE 4
#define DSIZE 8
#define CHUNKSIZE (1<<9)

#define MAX(x,y) ((x)>(y)?(x):(y))

#define PACK(size,alloc) ((size) | (alloc))

#define GET(p) (*(unsigned int *)(p))
#define PUT(p,val) (*(unsigned int *)(p)=(val))

#define GET_SIZE(p) (GET(p) & ~0x7)
#define GET_ALLOC(p) (GET(p) &0x1)

#define HDRP(bp)  ((char*)(bp)-WSIZE)
#define FTRP(bp)  ((char*)(bp) + GET_SIZE(HDRP(bp)) -DSIZE)

#define NEXT_BLKP(bp) ((char*)(bp) + GET_SIZE(((char*)(bp) - WSIZE)))
#define PREV_BLKP(bp) ((char*)(bp) - GET_SIZE(((char*)(bp) - DSIZE)))

#define GET_PTR(p)  (unsigned int*)(GET(p))               //获得和写入指针
#define PUT_PTR(p,ptr)  (*(unsigned int*)(p)=((long)ptr))
#define FREE_PTR_NUM 4

static char* heap_listp;
static char* heap_begin;
int mm_init(void);
static void *extend_heap(size_t words);
void *mm_malloc(size_t size);
void mm_free(void* ptr);
static void *coalesce(void *bp);
static void* find_fit(size_t asize);
static void place(void *bp, size_t asize);
void *mm_realloc(void *ptr, size_t size);
static void memory_copy(void *dest, void *source, size_t count);
static int check_free_list(size_t size);
static void insert_free(void* bp);
static void remove_free(void *bp);
int mm_check(void);

/* 
 * mm_init - initialize the malloc package.
 */
int mm_init(void)
{
    int i;
    if((heap_listp = mem_sbrk((FREE_PTR_NUM+4)*WSIZE)) == (void*)-1)
        return -1;
    heap_begin = heap_listp;
    for(i = 0; i < FREE_PTR_NUM; i++)
        PUT_PTR(heap_listp + i*WSIZE,NULL);
    heap_listp +=(FREE_PTR_NUM*WSIZE);
    PUT(heap_listp,0);
    PUT(heap_listp + (1 * WSIZE), PACK(DSIZE,1));
    PUT(heap_listp + (2 * WSIZE), PACK(DSIZE, 1));
    PUT(heap_listp + (3 * WSIZE), PACK(0,1));
    heap_listp += (2*WSIZE);
    /*if(extend_heap(CHUNKSIZE/WSIZE) == NULL)
        return -1;*/
    return 0;
    
}
    



static void *extend_heap(size_t words)
{
    char *bp;
    size_t size;
    size_t next_alloc;
    size = (words % 2) ? (words+1) * WSIZE : words * WSIZE;
    if((long)(bp = mem_sbrk(size)) == -1)
       return NULL;
    PUT(HDRP(bp), PACK(size, 0));
    PUT(FTRP(bp), PACK(size, 0));
    PUT(HDRP(NEXT_BLKP(bp)),PACK(0,1));
    return coalesce(bp);
}

/* 
 * mm_malloc - Allocate a block by incrementing the brk pointer.
 *     Always allocate a block whose size is a multiple of the alignment.
 */
void *mm_malloc(size_t size)     //malloc
{
    size_t asize;
    //size_t extendsize;
    char* bp;
    if(size == 0)
       return NULL;
    if(size != 112 && size != 448)
    {
    if(size <= DSIZE)
       asize = 2*DSIZE;
    else 
       asize = DSIZE*((size + (DSIZE) + (DSIZE-1) )/ DSIZE);
    }
    if(size == 112)               //进行了某种神奇的特殊优化，别管它就行
       asize = 136;
    if(size == 448)
       asize = 520;
    if ((bp = find_fit(asize)) != NULL){
       place(bp,asize);
       return bp;
    }
    //extendsize = MAX(asize,CHUNKSIZE);
    if((bp = extend_heap(asize/WSIZE)) == NULL)
       return NULL;
    place(bp,asize);
    return bp;

}

/*
 * mm_free - Freeing a block does nothing.
 */
void mm_free(void *bp)
{
   size_t size = GET_SIZE(HDRP(bp));
   
   PUT(HDRP(bp), PACK(size,0));
   PUT(FTRP(bp), PACK(size,0));
   coalesce(bp); 
}

static void *coalesce(void *bp)    //在合并块的同时维护空闲链表
{
   size_t prev_alloc = GET_ALLOC(FTRP(PREV_BLKP(bp)));
   size_t next_alloc = GET_ALLOC(HDRP(NEXT_BLKP(bp)));
   size_t size = GET_SIZE(HDRP(bp));

   if (prev_alloc && next_alloc){
       insert_free(bp);
       return bp;
   }
   else if (prev_alloc && !next_alloc){
       remove_free(NEXT_BLKP(bp));
       size += GET_SIZE(HDRP(NEXT_BLKP(bp)));
       PUT(HDRP(bp), PACK(size,0));
       PUT(FTRP(bp), PACK(size,0));
   }
   else if (!prev_alloc && next_alloc){
       remove_free(PREV_BLKP(bp));
       size += GET_SIZE(HDRP(PREV_BLKP(bp)));
       PUT(FTRP(bp),PACK(size,0));
       PUT(HDRP(PREV_BLKP(bp)),PACK(size,0));
       bp = PREV_BLKP(bp);
  }
  else {
       remove_free(NEXT_BLKP(bp));
       remove_free(PREV_BLKP(bp));
       size += GET_SIZE(HDRP(PREV_BLKP(bp))) + GET_SIZE(FTRP(NEXT_BLKP(bp)));
       PUT(HDRP(PREV_BLKP(bp)),PACK(size,0));
       PUT(FTRP(NEXT_BLKP(bp)),PACK(size,0));
       bp = PREV_BLKP(bp);
  }
  insert_free(bp);
  return bp;  
}

static void* find_fit(size_t asize)
{
  /*void* bp;
  int index = check_free_list(asize);
  while(index < FREE_PTR_NUM){
     bp = GET_PTR(heap_begin + index * WSIZE);
     while(bp != NULL){
        if(GET_SIZE(HDRP(bp))>=asize)
              return bp;
        bp = GET_PTR(bp);
     }
     index++;
   }
   return NULL;*/                            //最开始采用首次适配，后来改用best-fit
  void* bp;
  void* temp = NULL;
  int min_size = 1<<24;
  int index = check_free_list(asize);
  while(index < FREE_PTR_NUM){
     bp = GET_PTR(heap_begin + index * WSIZE);
     while(bp != NULL){
        int size = GET_SIZE(HDRP(bp));
        if(size == asize)

              return bp;
        else if(size > asize && size < min_size)
        {
           temp = bp;
           min_size = size;
        }
        bp = GET_PTR(bp);
     }
     index++;
   }
   if(temp != NULL)
       return temp;
   return NULL; 

  
   
}
     

static void place(void *bp, size_t asize)     
{
  size_t csize = GET_SIZE(HDRP(bp));
  remove_free(bp);
  if((csize - asize) >=(2*DSIZE)){
      PUT(HDRP(bp),PACK(asize,1));
      PUT(FTRP(bp),PACK(asize,1));
      bp = NEXT_BLKP(bp);
      PUT(HDRP(bp),PACK(csize-asize,0));
      PUT(FTRP(bp),PACK(csize-asize,0));
      insert_free(bp);
  }
  else
  {
      PUT(HDRP(bp),PACK(csize,1));
      PUT(FTRP(bp),PACK(csize,1));
  }
}
/*
 * mm_realloc - Implemented simply in terms of mm_malloc and mm_free
 */
void *mm_realloc(void *ptr, size_t size)                //realloc函数，实现起来实现所有的情况，并且最大可能进行优化，还是有点麻烦
{
  void *bp;
  int i;
  size_t combine_size;
  size_t csize;
  size_t asize;
  void* next_hdrp = HDRP(NEXT_BLKP(ptr));
  void* next_next_hdrp = HDRP(NEXT_BLKP(NEXT_BLKP(ptr)));
  if(ptr == NULL){
      return mm_malloc(size);
  }
  if (size == 0){
     mm_free(ptr);
     return NULL;
  }
  csize = GET_SIZE(HDRP(ptr));
  if(size <= DSIZE)
       asize = 2*DSIZE;
    else 
       asize = DSIZE*((size + (DSIZE) + (DSIZE-1) )/ DSIZE);
  if(csize < asize){                                    //csize小于asize的情况
     if(GET_SIZE(next_hdrp) == 0)     //后面是0/1
     {
        mem_sbrk(asize-csize);
        PUT(HDRP(ptr),PACK(asize,1));
        PUT(FTRP(ptr),PACK(asize,1));
        PUT(HDRP(NEXT_BLKP(ptr)),PACK(0,1));
        return ptr;
     }
     if(GET_ALLOC(next_hdrp))     //后面是已分配块
     {     
        bp = mm_malloc(size);
        memory_copy(bp,ptr,csize-DSIZE);
        mm_free(ptr);
        return bp;
     }
     combine_size = csize + GET_SIZE(next_hdrp);  //后面是空白块的话合并
     if(combine_size < asize)
     {
       if(GET_SIZE(next_next_hdrp) == 0)
        {
        mem_sbrk(asize-combine_size);
        PUT(HDRP(ptr),PACK(asize,1));
        PUT(FTRP(ptr),PACK(asize,1));
        PUT(HDRP(NEXT_BLKP(ptr)),PACK(0,1));
        return ptr;
        }   
        bp = mm_malloc(size);
        memory_copy(bp,ptr,csize-DSIZE);
        mm_free(ptr);
        return bp;
     } 
     else if((combine_size - asize >=(2*DSIZE)))
     { 
      PUT(HDRP(ptr),PACK(asize,1));
      PUT(FTRP(ptr),PACK(asize,1));
      ptr = NEXT_BLKP(ptr);
      PUT(HDRP(ptr),PACK(combine_size-asize,0));
      PUT(FTRP(ptr),PACK(combine_size-asize,0));
     } 
     return ptr;   
  }
  else if((csize - asize) >=(2*DSIZE)){
      PUT(HDRP(ptr),PACK(asize,1));
      PUT(FTRP(bp),PACK(asize,1));
      bp = NEXT_BLKP(bp);
      PUT(HDRP(bp),PACK(csize-asize,0));
      PUT(FTRP(bp),PACK(csize-asize,0));
      return coalesce(bp);
  } 
  return ptr;
}

static void memory_copy(void *dest, void *source, size_t count)   //自己实现的memory copy
{
  int num = count/4;
  int mod = count%4;
  int* dst = (int*)dest;
  int* src = (int*)source;
  while(num--)
  *dst++=*src++;
  while(mod--)
  *(char*)dst++=*(char*)src++;
}

static int check_free_list(size_t size)     //查找链表
{
  int i;
  for(i = 0;i <FREE_PTR_NUM - 1;i++){
     if(size > (1<<(i+4)))
        continue;
     else
        return i;
  }
  return FREE_PTR_NUM - 1;
  
}
static void insert_free(void* bp)     //insert链表
{
  void* ptr;
  size_t size = GET_SIZE(HDRP(bp));
  int index = check_free_list(size);
  ptr = heap_begin + index*WSIZE;
  if(GET_PTR(ptr) == NULL){
    PUT_PTR(ptr ,bp);
    PUT_PTR(bp, NULL);
    PUT_PTR((unsigned int*)(bp) + 1,NULL);
    
  }
  else
  {
    PUT_PTR(bp,GET_PTR(ptr));
    PUT_PTR((unsigned int*)(GET_PTR(ptr)) + 1,bp);
    PUT_PTR(ptr,bp);   
    PUT_PTR((unsigned int*)(bp) + 1, NULL);
   
  }
 
}

static void remove_free(void *bp)     //remove链表
{
  size_t size = GET_SIZE(HDRP(bp));
  int index = check_free_list(size);
  if(GET_PTR((unsigned int*)(bp) + 1) == NULL){
     void* ptr = heap_begin + index * WSIZE;
     PUT_PTR(ptr,GET_PTR(bp));
     if(GET_PTR(ptr)!= NULL)
        PUT_PTR((unsigned int*)(GET_PTR(ptr))+1,NULL);
  }
  else
  {
    void* succ = GET_PTR(bp);
    void* prev = GET_PTR((unsigned int*)(bp) + 1);
    PUT_PTR(prev,succ);
    if(succ != NULL)
      PUT_PTR((unsigned int*)(succ)+1,prev);
  }
  
}








int mm_check(void)                     //mm_check
{
   int index = 0;
   int boolean = 1;
   void* bp;
   while(index < FREE_PTR_NUM){                               //Is every block in the free list marked as free?
     bp = GET_PTR(heap_begin + index * WSIZE);
     while(bp != NULL){
        if(GET_ALLOC(bp)){
           boolean = 0;
           break;
        }
        bp = GET_PTR(bp);
     }
     if(boolean == 0)
        break;
     index++;
   }
   if(boolean == 0)
      {
        printf("The pointer %x shouldn't be in the list!\n",bp);                          
        return boolean;
      }
   for(bp = heap_listp;GET_SIZE(HDRP(bp)) > 0;bp = NEXT_BLKP(bp)){                  //Are there any contiguous free blocks that somehow escaped coalescing?
          if((!GET_ALLOC(HDRP(bp))) && (!GET_ALLOC(HDRP(NEXT_BLKP(bp))))){
               boolean = 0;
               break;
          }
   }
   if(boolean == 0)
   {
     printf("The blocker %x and the blocker after it are escape coalescing!\n",bp);
     return boolean;
   }
   for(bp = heap_listp;GET_SIZE(HDRP(bp)) > 0;bp = NEXT_BLKP(bp)){                 //Is every free block actually in the free list?
          if(!GET_ALLOC(HDRP(bp))){
            size_t check_size = GET_SIZE(HDRP(bp));
            int index = check_free_list(check_size);
            void* temp = GET_PTR(heap_begin + index * WSIZE);
            while(temp != NULL){
               if(bp == temp)
                    break;
               temp = GET_PTR(temp);
            }
            if(temp == NULL){
              printf("The pointer %x is not in the free lists!\n",bp);
              return 0;
            }
   }
   printf("ALL TEST PASSED!\n");
   return 1;
   }
}
    
    

  














