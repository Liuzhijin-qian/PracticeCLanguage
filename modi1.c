#include  <stdlib.h>
#include  <conio.h>
#include  <stdio.h>
#include  <math.h>
/*************found**************/
float fun(int k)
{ 
  int n; float s, w, p, q;
  n=1;
  s=1.0;
  while(n<=k)
   { 
	  w=2.0*n;
      p=w-1.0;
      q=w+1.0;
      s=s*((w*w)/(p*q));
      n++;
   }
/*************found**************/
  return s;
}
void main()
{ system("CLS");
  printf("%f\n ",fun(10));
}
