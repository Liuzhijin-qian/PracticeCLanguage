#include    <stdio.h>
#define    N    4
/**********found**********/
void fun(int  (*t)[N] )
{  int  i, j;
   for(i=1; i<N; i++)
   {  for(j=0; j<i; j++)
      {
/**********found**********/
           t[i][j] =t[i][j]+t[j][i];
/**********found**********/
            t[j][i] =0;
      }
   }
}
void main()
{  int  t[][N]={21,12,13,24,25,16,47,38,29,11,32,54,42,21,33,10}, i, j;
   printf("\nThe original array:\n");
   for(i=0; i<N; i++)
   {  for(j=0; j<N; j++)  printf("%2d  ",t[i][j]);
      printf("\n");
   }
   fun(t);
   printf("\nThe result is:\n");
   for(i=0; i<N; i++)
   {  for(j=0; j<N; j++)  printf("%2d  ",t[i][j]);
      printf("\n");
   }
}

