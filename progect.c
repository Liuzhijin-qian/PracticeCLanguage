//#include <stdio.h>
//
//void menu()
//{
//	printf("###########################\n");
//	printf("######1.加法   2.减法######\n");
//	printf("######3.乘法   4.除法######\n");
//	printf("###########################\n");
//}
//
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int Sub(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//}
//
//int Mul(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//}
//
//int Div(int x, int y)
//{
//	int z = 0;
//	z = x / y;
//	return z;
//}
//int main()
//
//{
//	int imput = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请输入你想要的算数");
//		scanf_s("%d", &imput);
//		switch (imput)
//		{
//		case 1:
//			printf("请输入两个操作数\n");
//			scanf_s("%d,%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数\n");
//			scanf_s("%d,%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数\n");
//			scanf_s("%d,%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数\n");
//			scanf_s("%d,%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		default:
//			printf("输入错误，请重新选择。\n");
//		}
//
//	} while (imput);
//
//
//	return 0;
//}


//
//
//
//
//
//
//#include <stdio.h>
//void menu()
//{
//	printf("###########################\n");
//	printf("######1.加法   2.减法######\n");
//	printf("######3.乘法   4.除法######\n");
//	printf("###########################\n");
//}
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int Sub(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//}
//
//int Mul(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//}
//
//int Div(int x, int y)
//{
//	int z = 0;
//	z = x / y;
//	return z;
//}
//
//int main()
//
//{
//	menu();
//	int (*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	int impute = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		printf("请您选择：\n");
//		scanf_s("%d,", &impute);
//		if (impute >= 1 && impute <= 4)
//		{
//			printf("请输入两个操作数：\n");
//			scanf_s("%d,%d", &x, &y);
//			printf("%d", p[impute](x, y));
//		}
//		else if (impute == 0)
//		{
//			printf("请退出\n");
//		}
//		else
//		{
//			printf("请重新输入\n");
//		}
//	} while (impute);
//
//	return 0;
//}






#include <stdio.h>


void Bubble_sort(int arr[], int x)
{
	int i, j = 0;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8 - i; j++)
		{
			int tmp = 0;
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;

		}

	}
}
int main()

{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	Bubble_sort(arr, 9);
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}