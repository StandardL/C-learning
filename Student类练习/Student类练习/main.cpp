#include <iostream>
#include "Students.h"
using namespace std;

int main()
{
	cout << "请输入你需要管理的学生信息数量：";
	int num;
	cin >> num; cin.get();
	Student* p = new Student[num];
	int a;
	while (1)
	{	
		menu();
		int op;
		cin >> op; cin.get();
		cout << "查询第几号学生信息？";
		cin >> a; cin.get();
		switch (op)
		{
		case 1:p[a - 1].Show();
			break;
		case 2:p[a - 1].SetInfo();
			break;
		case 0:cout << "退出系统！";
			break;
		default: cout << "输入有误！请重新输入！";
			break;
		}
		if (op == 0) break;
	}
	return 0;
}