#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
double fun(int n)
{
     int i = 0;
	 int j = 2;
	 double reg = 0;
	 for(i=1;i<=n;i++)
	 {
		 reg = reg + 1.0/(i * j);
			 j++;
	 }
	 return reg;
}
void main()
{ 
  FILE *wf;
  system("CLS");
  printf("%f\n",fun(10));
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%f",fun(10));
  fclose(wf);
/*****************************/
}
