#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/************found************/
#define FU(m,n) ((m/n))
float fun(float a,float b,float c)
{  float  value;
   value=FU((a+b),(a-b))+FU((c+b),(c-b));
/************found************/
   return (value);
}
void main()
{  float  x,y,z,sum;
   printf("Input  x  y  z:  ");
   scanf("%f%f%f",&x,&y,&z);
   printf("x=%f,y=%f,z=%f\n",x,y,z);
   if (x==y||y==z){printf("Data error!\n");exit(0);}
   sum=fun(x,y,z);
   printf("The result is : %5.2f\n",sum);
}
