/*
 * student ID:5140379064
 * login ID:ics5140379064
 * student name:陈俊
 */

/* 
 * trans.c - Matrix transpose B = A^T
 *
 * Each transpose function must have a prototype of the form:
 * void trans(int M, int N, int A[N][M], int B[M][N]);
 *
 * A transpose function is evaluated by counting the number of misses
 * on a 1KB direct mapped cache with a block size of 32 bytes.
 */ 
#include <stdio.h>
#include "cachelab.h"

int is_transpose(int M, int N, int A[N][M], int B[M][N]);

/* 
 * transpose_submit - This is the solution transpose function that you
 *     will be graded on for Part B of the assignment. Do not change
 *     the description string "Transpose submission", as the driver
 *     searches for that string to identify the transpose function to
 *     be graded. 
 */
char transpose_submit_desc[] = "Transpose submission";
void transpose_submit(int M, int N, int A[N][M], int B[M][N])
{
   int i,j,tmp0,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7;
   if(M == 61 && N == 67)
   {
      int k;
     for(j = 0;j < 56;j += 8)    
        for(i = 0; i < 66; i+=6)
        {
           for(k = i ; k < i+3;k++)
           {
           tmp0 = A[k][j];
           tmp1 = A[k][j+1];
           tmp2 = A[k][j+2];
           tmp3 = A[k][j+3];
           tmp4 = A[k][j+4];
           tmp5 = A[k][j+5];
           tmp6 = A[k][j+6];
           tmp7 = A[k][j+7];
           B[j][k] = tmp0;
           B[j+1][k] = tmp1;
           B[j+2][k] = tmp2;
           B[j+3][k] = tmp3;
           B[j][k+3] = tmp4;
           B[j+1][k+3] = tmp5;
           B[j+2][k+3] = tmp6;
           B[j+3][k+3] = tmp7;
           }
          for(k = j;k < j+4;k++)
          {
            tmp0 = B[k][i+3];
            tmp1 = B[k][i+4];
            tmp2 = B[k][i+5];
            tmp3 = A[i+3][k];
            tmp4 = A[i+4][k];
            tmp5 = A[i+5][k];         
            B[k][i+3] = tmp3;
            B[k][i+4] = tmp4;
            B[k][i+5] = tmp5;
            tmp3 = A[i+3][k+4];
            tmp4 = A[i+4][k+4];
            tmp5 = A[i+5][k+4];
 
            B[k+4][i] = tmp0;
            B[k+4][i+1] = tmp1;
            B[k+4][i+2] = tmp2;
            B[k+4][i+3] = tmp3;
            B[k+4][i+4] = tmp4;
            B[k+4][i+5] = tmp5;
            if(k == 51)
            {
              for(k = 56; k < 61;k++) 
              {
              tmp0 = A[i][k];
              tmp1 = A[i+1][k];
              tmp2 = A[i+2][k];
              tmp3 = A[i+3][k];
              tmp4 = A[i+4][k];
              tmp5 = A[i+5][k];
              B[k][i] = tmp0;
              B[k][i+1] = tmp1;
              B[k][i+2] = tmp2;
              B[k][i+3] = tmp3;
              B[k][i+4] = tmp4;
              B[k][i+5] = tmp5;
             }
            }
          }
          if(i == 60)
          {
              tmp0 = A[66][j];
              tmp1 = A[66][j+1];
              tmp2 = A[66][j+2];
              tmp3 = A[66][j+3];
              tmp4 = A[66][j+4];
              tmp5 = A[66][j+5];
              tmp6 = A[66][j+6];
              tmp7 = A[66][j+7];
              B[j][66] = tmp0;
              B[j+1][66] = tmp1;
              B[j+2][66] = tmp2;
              B[j+3][66] = tmp3;
              B[j+4][66] = tmp4;
              B[j+5][66] = tmp5;
              B[j+6][66] = tmp6;
              B[j+7][66] = tmp7;
              if(j == 48)
              {
                 for(k = 56;k < 61;k++)
                 {
                 tmp0 = A[66][k];
                 B[k][66] = tmp0;
                 }
              }
          }
        }
     }
   else if( M == 64 && N == 64)
   {
     int k;
     for(j = 0;j < M;j+=8)
       for(i = 0; i < N; i+=8)
        {
           for(k = i ; k < i+4;k++)
           {
           tmp0 = A[k][j];
           tmp1 = A[k][j+1];
           tmp2 = A[k][j+2];
           tmp3 = A[k][j+3];
           tmp4 = A[k][j+4];
           tmp5 = A[k][j+5];
           tmp6 = A[k][j+6];
           tmp7 = A[k][j+7];
           B[j][k] = tmp0;
           B[j+1][k] = tmp1;
           B[j+2][k] = tmp2;
           B[j+3][k] = tmp3;
           B[j][k+4] = tmp4;
           B[j+1][k+4] = tmp5;
           B[j+2][k+4] = tmp6;
           B[j+3][k+4] = tmp7; 
          }
          for(k = j;k < j+4;k++)
          {
            tmp0 = B[k][i+4];
            tmp1 = B[k][i+5];
            tmp2 = B[k][i+6];
            tmp3 = B[k][i+7];
            tmp4 = A[i+4][k];
            tmp5 = A[i+5][k];
            tmp6 = A[i+6][k];
            tmp7 = A[i+7][k];
            B[k][i+4] = tmp4;
            B[k][i+5] = tmp5;
            B[k][i+6] = tmp6;
            B[k][i+7] = tmp7;
            tmp4 = A[i+4][k+4];
            tmp5 = A[i+5][k+4];
            tmp6 = A[i+6][k+4];
            tmp7 = A[i+7][k+4];
            B[k+4][i] = tmp0;
            B[k+4][i+1] = tmp1;
            B[k+4][i+2] = tmp2;
            B[k+4][i+3] = tmp3;
            B[k+4][i+4] = tmp4;
            B[k+4][i+5] = tmp5;
            B[k+4][i+6] = tmp6;
            B[k+4][i+7] = tmp7;
          } 
        }
   }
   else if(M ==32 && N==32)
     {
       for(j = 0;j < M;j+=8)
       for(i = 0; i < N; i++)
        {
           tmp0 = A[i][j];
           tmp1 = A[i][j+1];
           tmp2 = A[i][j+2];
           tmp3 = A[i][j+3];
           tmp4 = A[i][j+4];
           tmp5 = A[i][j+5];
           tmp6 = A[i][j+6];
           tmp7 = A[i][j+7];
           B[j][i] = tmp0;
           B[j+1][i] = tmp1;
           B[j+2][i] = tmp2;
           B[j+3][i] = tmp3;
           B[j+4][i] = tmp4;
           B[j+5][i] = tmp5;
           B[j+6][i] = tmp6;
           B[j+7][i] = tmp7;          
        }
     }
   else
    {
        for (i = 0; i < N; i++) 
        {
          for (j = 0; j < M; j++) 
          {
            tmp0 = A[i][j];
            B[j][i] = tmp0;
          }
        }
    }

   
}

/* 
 * You can define additional transpose functions below. We've defined
 * a simple one below to help you get started. 
 */ 

/* 
 * trans - A simple baseline transpose function, not optimized for the cache.
 */
char trans_desc[] = "Simple row-wise scan transpose";
void trans(int M, int N, int A[N][M], int B[M][N])
{
    int i, j, tmp;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            tmp = A[i][j];
            B[j][i] = tmp;
        }
    }    

}

/*
 * registerFunctions - This function registers your transpose
 *     functions with the driver.  At runtime, the driver will
 *     evaluate each of the registered functions and summarize their
 *     performance. This is a handy way to experiment with different
 *     transpose strategies.
 */
void registerFunctions()
{
    /* Register your solution function */
    registerTransFunction(transpose_submit, transpose_submit_desc); 

    /* Register any additional transpose functions */
    registerTransFunction(trans, trans_desc); 

}

/* 
 * is_transpose - This helper function checks if B is the transpose of
 *     A. You can check the correctness of your transpose by calling
 *     it before returning from the transpose function.
 */
int is_transpose(int M, int N, int A[N][M], int B[M][N])
{
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; ++j) {
            if (A[i][j] != B[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}
