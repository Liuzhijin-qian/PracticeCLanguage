#include "Contact.h"

int main()
{
	int a = 1, b = 10;
	int c = add(a, b);
	cout << "c=" << c << endl;
	int slect = 0;
	Peo Calc;
	do
	{
		Meun();
		cout << "请输入你的操作\n";
		cin >> slect;
		switch (slect)
		{
		case 1:
			//AddContact(Calc);
			break;
		case 2:
			break;
		case 3:
			//ShowContact(Calc);
			break;
		case 4:
			break;
		default:
			cout << "输入错误，请重新输入" << endl;
		}
	} while (slect);

	return 0;
}