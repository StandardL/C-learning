#include <iostream>
#include <Windows.h>
#include "elevator.h"
using namespace std;

int main()
{
	menu();
	cout << "�������ڵ��ݴ���1F\n";
	Lift HTC(1);									//��ʼ������
	int op;											//��¼����
	int temp;										//����Ҫȥ��¥��
	cin >> op;
	while (1)										//һֱѭ������ʾ�û�һֱ�ڵ����У��ȴ��û��������
	{
		if (op == 1)
		{
			cout << "����������Ҫȥ��¥�㣺";
			cin >> temp;
			HTC.floorget(temp);
			HTC.Lup();
			menu();
			cin >> op;
		}
		else if (op == 2)
		{
			cout << "����������Ҫȥ��¥�㣺";
			cin >> temp;
			HTC.floorget(temp);
			HTC.Ldown();
			menu();
			cin >> op;
		}
		else if (op == 9)
		{
			system("cls");
			menu();
			cin >> op;
		}
		else if (op == 0)
			break;
		else
		{
			cout << "�޴˲��������������룡";
			Sleep(3000);
			system("cls");
			menu();
			cin >> op;
		}
	}
	cout << "��ӭ�´��������������ݣ�";
	return 0;
}