#include "Calc.h"

int main()
{
	int input = 0;
	int (*p[5])(int x, int y) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请输入要进行的操作->\n");
		scanf("%d", &input);

		if (input >= 1 && input <= 4)
		{
			int x = 0; int y = 0;
			printf("请输入第一个操作数->\n");
			scanf("%d", &x);
			printf("请输入第二个操作数->\n");
			scanf("%d", &y);
			printf("%d\n", (*p[input])( x , y));
		}
		else
		{
			printf("输入的数字错误，请重新输入\n");
		}



	} while (input);

	return 0;
}