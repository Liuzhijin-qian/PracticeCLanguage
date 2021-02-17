#include "Calc.h"

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请输入想要的功能：");
		scanf("%d", &input);
		switch (input)
		{
			
		case 1:
			printf("请输入第一个操作数->\n");
			scanf("%d", &x);
			printf("请输入第一个操作数->\n");
			scanf("%d", &y);
			printf("%d\n", Add(x, y));
			break;
		case 2:
			printf("请输入第一个操作数->\n");
			scanf("%d", &x);
			printf("请输入第一个操作数->\n");
			scanf("%d", &y);
			printf("%d\n",Sub(x,y));
			break;
		case 3:
			printf("请输入第一个操作数->\n");
			scanf("%d", &x);
			printf("请输入第一个操作数->\n");
			scanf("%d", &y);
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			printf("请输入第一个操作数->\n");
			scanf("%d", &x);
			printf("请输入第一个操作数->\n");
			scanf("%d", &y);
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("退出成功\n");
			break;
		default :
			printf("输入错误，请重新输入！");
			break;
		}


	} while (input);



	return 0;
}