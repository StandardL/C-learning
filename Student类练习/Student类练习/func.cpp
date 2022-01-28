#include <iostream>
#include <string>
#include "Students.h"
using namespace std;

void menu()
{
	cout << "----------------------\n";
	cout << "欢迎使用学生信息管理系统！\n";
	cout << "请输入数字代码进行操作。\n";
	cout << "1.查询学生信息\n";
	cout << "2.修改学生信息\n";
	cout << "0.关闭系统\n";
	cout << "----------------------\n";
}

Student::Student()
{
	number = 0;
	name = "无信息";
	sex = 1;
	year_birth = 2021;
	month_birth = day_birth = 1;
	grade = 0;
	class_num = 0;
	collage = "未分配学院";
	section = "未分配专业";
}
Student::Student(int num, int sexual, string n)
{
	name = n;
	number = num;
	sex = sexual;
	year_birth = 2021;
	month_birth = day_birth = 1;
	grade = 0;
	class_num = 0;
	collage = "未分配学院";
	section = "未分配专业";
}
Student::Student(int num, int sexual, string n,  int y, int m, int d)
{
	number = num;
	name = n;
	sex = sexual;
	year_birth = y;
	month_birth = m;
	day_birth = d;
	grade = 0;
	class_num = 0;
	collage = "未分配学院";
	section = "未分配专业";
}
void Student::SetInfo()
{
	cout << "现在进入信息修改模式！\n";
	cout << "若不需要修改，请输入0以跳过！\n";
	cout << "姓名：";
	string temp;
	getline(cin, temp);
	if (temp[0] != '0') name = temp;
	cout << "学号：";
	unsigned long long num_t;
	cin >> num_t; cin.get();
	if (num_t != 0) number = num_t;
	cout << "性别（此处跳过请输入2）：";
	cin >> num_t; cin.get();
	if (num_t != 2)
	{
		if (num_t == 0 || num_t == 1) sex = num_t;
		else cout << "输入有误！此次修改不会被保存！\n";
	}
	cout << "出生年份：";
	cin >> num_t; cin.get();
	if (num_t != 0) year_birth = num_t;
	cout << "出生月份：";
	cin >> num_t; cin.get();
	if (num_t != 0) month_birth = num_t;
	cout << "出生日：";
	cin >> num_t; cin.get();
	if (num_t != 0) day_birth = num_t;
	cout << "院系：";
	getline(cin, temp);
	if (temp[0] != '0') collage = temp;
	cout << "专业：";
	getline(cin, temp);
	if (temp[0] != '0') section = temp;
	cout << "年级：";
	cin >> num_t; cin.get();
	if (num_t != 0) grade = num_t;
	cout << "班级：";
	cin >> num_t; cin.get();
	if (num_t != 0) class_num = num_t;
	cout << "所有信息输入完毕！请确认信息是否被正确修改！";
	Show();
}

void Student::Show()
{
	cout << "姓名：" << name << endl;
	cout << "学号：" << number << endl;
	cout << "性别：" << sex << endl;
	cout << "出生日期：" << year_birth << "." << month_birth << "." << day_birth << endl;
	cout << "院系：" << collage << endl;
	cout << "专业：" << section << endl;
	cout << "年级：" << grade << endl;
	cout << "班级：" << class_num << endl;
	cout << "--------------------" << endl;
}