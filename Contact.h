#pragma once
#define MAX 5
#include <iostream>
#include <string>
using namespace std;

struct PeopelInfor
{
	string name;
	char sex;
	int age;
	string address;
	string tele;
};

struct Peo
{
	struct PeopelInfor perasonArry[MAX];
	int size = 0;
};

void Meun();
void AddContact(struct Peo);//添加联系人

//void DelContact(struct Peo);//删除联系人

//void ShowContact(struct Peo);//显示联系人

//void ModContact(struct Peo);//修改联系人

int add(int, int);