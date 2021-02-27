#include    <stdio.h>
#define    N    8
typedef  struct
{  int  num;
   int  year,month,day ;
}STU;
int fun(STU  *std, STU  *k, int  year)
{  int  i,n=0;
   for (i=0; i<N; i++)
/**********found**********/
if( std[i].year  == year)
/**********found**********/
         k[n++]= std[i];
/**********found**********/
   return (n);
}
void main()
{  STU  std[N]={ {1,1984,2,15},{2,1983,9,21},{3,1984,9,1},{4,1983,7,15},
                 {5,1985,9,28},{6,1982,11,15},{7,1982,6,22},{8,1984,8,19}};
   STU  k[N];         int  i,n,year;
   printf("Enter a year :  ");  scanf("%d",&year);
   n=fun(std,k,year);
   if(n==0)
      printf("\nNo person was born in %d \n",year);
   else
   {   printf("\nThese persons were born in %d \n",year);
       for(i=0; i<n; i++)
         printf("%d  %d-%d-%d\n",k[i].num,k[i].year,k[i].month,k[i].day);
   }
}

