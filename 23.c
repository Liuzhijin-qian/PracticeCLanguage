#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define N 10
typedef struct ss    /*定义结构体*/
{ char num[10]; 
  int s;
} STU;
void fun(STU a[], STU *s)
{
	int p = 0;
	int j = 0;
	int i = a[0].s;
	for(j=0;j<N;j++)
	{
		if(i < a[j].s)
		{
			i = a[j].s;
			s[0] = a[j];
		}
	}
	

}
void main()
{ 
  FILE *wf;
  STU a[N]={{ "A01",81},{ "A02",89},{ "A03",66},{ "A04",87},{ "A05",77},
  { "A06",90},{ "A07",79},{ "A08",61},{ "A09",80},{ "A10",71}},m;
  int i;
  system("CLS");
  printf("*****The original data*****");
  for(i=0;i<N;i++) 
     printf("No=%s Mark=%d\n", a[i].num,a[i].s);
  fun(a,&m);
  printf("*****THE RESULT*****\n");
  printf("The top :%s, %d\n",m.num,m.s);
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%s,%d",m.num,m.s);
  fclose(wf);
/*****************************/
}
