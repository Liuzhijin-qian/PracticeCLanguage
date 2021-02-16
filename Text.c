#include "Calc.h"

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入想要的功能：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Add();
			break;
		case 2:
			Sub();
			break;
		case 3:
			Mul();
			break;
		case 4:
			Div();
			break;
		default :
			printf("输入错误，请重新输入！");
			break;
		}


	} while (input);



	return 0;
}