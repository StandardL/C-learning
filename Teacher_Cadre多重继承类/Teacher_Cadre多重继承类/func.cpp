#include "Teacher_Cadre.h"
#include <iostream>
//using namespace std;
Teacher::Teacher(string n, string s, string a, string t, unsigned int ag) {
	name = n; sex = s; address = a; telephone = t; age = ag;
	title = "��ְλ";
}
void Teacher::Display() {
	cout << "������" << name << "  ���䣺" << age << endl;
	cout << "�Ա�" << sex << endl;
	cout << "��ַ��" << address << endl;
	cout << "�绰��" << telephone << endl;
	cout << "ְ�ƣ�" << title << endl;
}
void Teacher::Set() {
	cout << "����������";
	cin >> name; cin.get();
	cout << "�������䣺";
	cin >> age; cin.get();
	cout << "�����Ա�";
	cin >> sex; cin.get();
	cout << "�����ַ��";
	cin >> address; cin.get();
	cout << "����绰��";
	cin >> telephone; cin.get();
	cout << "����ְλ��";
	cin >> title; cin.get();
}
Cadre::Cadre(string n, string s, string a, string t, unsigned int ag)
{
	name = n; sex = s; address = a; telephone = t; age = ag;
	post = "��ְ��";
}