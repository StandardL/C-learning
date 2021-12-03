#include <iostream>
#include <Windows.h>
#include "elevator.h"
using namespace std;

int main()
{
	menu();
	cout << "您现在在电梯大堂1F\n";
	Lift HTC(1);									//初始化层数
	int op;											//记录操作
	int temp;										//缓存要去的楼层
	cin >> op;
	while (1)										//一直循环，表示用户一直在电梯中，等待用户输入操作
	{
		if (op == 1)
		{
			cout << "请输入您需要去的楼层：";
			cin >> temp;
			HTC.floorget(temp);
			HTC.Lup();
			menu();
			cin >> op;
		}
		else if (op == 2)
		{
			cout << "请输入您需要去的楼层：";
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
			cout << "无此操作！请重新输入！";
			Sleep(3000);
			system("cls");
			menu();
			cin >> op;
		}
	}
	cout << "欢迎下次再来乘坐本电梯！";
	return 0;
}