#include <iostream>
#include <string>
#include "Students.h"
using namespace std;

void menu()
{
	cout << "----------------------\n";
	cout << "��ӭʹ��ѧ����Ϣ����ϵͳ��\n";
	cout << "���������ִ�����в�����\n";
	cout << "1.��ѯѧ����Ϣ\n";
	cout << "2.�޸�ѧ����Ϣ\n";
	cout << "0.�ر�ϵͳ\n";
	cout << "----------------------\n";
}

Student::Student()
{
	number = 0;
	name = "����Ϣ";
	sex = 1;
	year_birth = 2021;
	month_birth = day_birth = 1;
	grade = 0;
	class_num = 0;
	collage = "δ����ѧԺ";
	section = "δ����רҵ";
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
	collage = "δ����ѧԺ";
	section = "δ����רҵ";
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
	collage = "δ����ѧԺ";
	section = "δ����רҵ";
}
void Student::SetInfo()
{
	cout << "���ڽ�����Ϣ�޸�ģʽ��\n";
	cout << "������Ҫ�޸ģ�������0��������\n";
	cout << "������";
	string temp;
	getline(cin, temp);
	if (temp[0] != '0') name = temp;
	cout << "ѧ�ţ�";
	unsigned long long num_t;
	cin >> num_t; cin.get();
	if (num_t != 0) number = num_t;
	cout << "�Ա𣨴˴�����������2����";
	cin >> num_t; cin.get();
	if (num_t != 2)
	{
		if (num_t == 0 || num_t == 1) sex = num_t;
		else cout << "�������󣡴˴��޸Ĳ��ᱻ���棡\n";
	}
	cout << "������ݣ�";
	cin >> num_t; cin.get();
	if (num_t != 0) year_birth = num_t;
	cout << "�����·ݣ�";
	cin >> num_t; cin.get();
	if (num_t != 0) month_birth = num_t;
	cout << "�����գ�";
	cin >> num_t; cin.get();
	if (num_t != 0) day_birth = num_t;
	cout << "Ժϵ��";
	getline(cin, temp);
	if (temp[0] != '0') collage = temp;
	cout << "רҵ��";
	getline(cin, temp);
	if (temp[0] != '0') section = temp;
	cout << "�꼶��";
	cin >> num_t; cin.get();
	if (num_t != 0) grade = num_t;
	cout << "�༶��";
	cin >> num_t; cin.get();
	if (num_t != 0) class_num = num_t;
	cout << "������Ϣ������ϣ���ȷ����Ϣ�Ƿ���ȷ�޸ģ�";
	Show();
}

void Student::Show()
{
	cout << "������" << name << endl;
	cout << "ѧ�ţ�" << number << endl;
	cout << "�Ա�" << sex << endl;
	cout << "�������ڣ�" << year_birth << "." << month_birth << "." << day_birth << endl;
	cout << "Ժϵ��" << collage << endl;
	cout << "רҵ��" << section << endl;
	cout << "�꼶��" << grade << endl;
	cout << "�༶��" << class_num << endl;
	cout << "--------------------" << endl;
}