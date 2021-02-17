#include "Calc.h"

void menu()
{
	printf("*******************\n");
	printf("* 1.ADD     2.SUB *\n");
	printf("* 3.MUL     4.DIV *\n");
	printf("*     0.EXIT      *\n");
	printf("*******************\n");
}


int Add(int x,int y)
{
	return (x + y);
}

int Sub(int x, int y)
{
	return (x - y);
}

int Mul(int x, int y)
{
	return (x * y);
}

int Div(int x, int y)
{
	return (x / y);
}
