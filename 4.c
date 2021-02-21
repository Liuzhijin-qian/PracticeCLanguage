#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float fun (float h )
{
  long t;
  t=(h*1000+5)/10;      /*单精度数h乘以1000后再加5，相当于对h中的第三位小数进行四舍五入
                        除以10后将其赋给一个长整型数时就把第三位小数后的数全部截去*/
  return (float)t/100;  /*除以100，保留2位小数*/
}
void main()
{
  FILE *wf;
  float a;
  system("CLS");
  printf("Enter a: ");
  scanf ("%f",&a);
  printf("The original data is :  ");
  printf("%f\n\n", a);
  printf("The  result : %f\n", fun(a));
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%f",fun(8.32533));
  fclose(wf);
/*****************************/
}
