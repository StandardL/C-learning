#include "Teacher_Cadre.h"
#include <iostream>
//using namespace std;
Teacher::Teacher(string n, string s, string a, string t, unsigned int ag) {
	name = n; sex = s; address = a; telephone = t; age = ag;
	title = "无职位";
}
void Teacher::Display() {
	cout << "姓名：" << name << "  年龄：" << age << endl;
	cout << "性别：" << sex << endl;
	cout << "地址：" << address << endl;
	cout << "电话：" << telephone << endl;
	cout << "职称：" << title << endl;
}
void Teacher::Set() {
	cout << "输入姓名：";
	cin >> name; cin.get();
	cout << "输入年龄：";
	cin >> age; cin.get();
	cout << "输入性别：";
	cin >> sex; cin.get();
	cout << "输入地址：";
	cin >> address; cin.get();
	cout << "输入电话：";
	cin >> telephone; cin.get();
	cout << "输入职位：";
	cin >> title; cin.get();
}
Cadre::Cadre(string n, string s, string a, string t, unsigned int ag)
{
	name = n; sex = s; address = a; telephone = t; age = ag;
	post = "无职称";
}