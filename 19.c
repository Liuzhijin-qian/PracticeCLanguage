#include   <stdio.h>
#pragma warning (disable:4996)
#define    N   16
/**********************found***********************/
int  fun( char s[])  
{  int  i,  n = 0;
/**********************found***********************/
   for (i=0; s[i] != '\0' && i <N ; ++i)
/**********************found***********************/
        n = n*2 + (s[i] - 48) ; 
   return  n;
}
main( )
{  char  num[] = "10011";    int  n;
   n = fun(num);
   printf( "%s-->%d\n", num, n );
}

