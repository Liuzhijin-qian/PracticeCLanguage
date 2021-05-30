#include "Contact.h"

void Meun()
{
	cout << "*********************************" << endl;
	cout << "***1.添加联人    2.删除联系人***" << endl;
	cout << "***3.显示联系人  4.修改联系人***" << endl;
	cout << "***         0.退出           ***" << endl;
	cout << "********************************" << endl;
}

void AddContact(struct Peo* p)
{
	if (p->size > MAX)
		cout << "通讯录已满，无法继续添加" << endl;
	else
		cout << "请输入添加人的姓名" << endl;
	cin >> p->perasonArry[(p->size)].address;
	cout << "请输入添加人的性别" << endl;
	cin >> p->perasonArry[(p->size)].sex;
	cout << "请输入添加人的年龄" << endl;
	cin >> p->perasonArry[(p->size)].age;
	cout << "请输入添加人的地址" << endl;
	cin >> p->perasonArry[(p->size)].address;
	cout << "请输入添加人的电话" << endl;
	cin >> p->perasonArry[(p->size)].tele;
	(p->size)++;
	cout << "添加成功" << endl;
}

//void DelContact();
//void ModContact();

//void ShowContact(struct Peo* p)
//{
//	if (p->size == 0)
//		cout << "通讯录为空，无法显示" << endl;
//	else
//		cout << "姓名 \t     性别 \t     年龄 \t     地址\t     电话\t" <<
//		p->perasonArry[(p->size)].name,
//		p->perasonArry[(p->size)].sex,
//		p->perasonArry[(p->size)].age,
//		p->perasonArry[(p->size)].address,
//		p->perasonArry[(p->size)].tele;
//}

int add(int x, int y)
{
	return x + y;
}