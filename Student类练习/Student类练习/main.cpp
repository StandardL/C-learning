#include <iostream>
#include "Students.h"
using namespace std;

int main()
{
	cout << "����������Ҫ�����ѧ����Ϣ������";
	int num;
	cin >> num; cin.get();
	Student* p = new Student[num];
	int a;
	while (1)
	{	
		menu();
		int op;
		cin >> op; cin.get();
		cout << "��ѯ�ڼ���ѧ����Ϣ��";
		cin >> a; cin.get();
		switch (op)
		{
		case 1:p[a - 1].Show();
			break;
		case 2:p[a - 1].SetInfo();
			break;
		case 0:cout << "�˳�ϵͳ��";
			break;
		default: cout << "�����������������룡";
			break;
		}
		if (op == 0) break;
	}
	return 0;
}