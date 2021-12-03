#include <iostream>
#include <Windows.h>
#include "elevator.h"
using namespace std;

void menu()
{
    cout << "-------------------\n";
    cout << "欢迎乘坐本电梯\n";
    cout << "1.上行\n";
    cout << "2.下行\n";
    cout << "9.清屏\n";
    cout << "0.退出\n";
    cout << "输入数字代码以操作\n";
    cout << "--------------------\n";
}

void Lift::show_floor()
{
    cout << "当前所在楼层为：" << floornow << endl;
}

Lift::Lift()                                    //默认构造函数
{
    floornow = 1;
    floorgo = 1;
}
Lift::Lift(const int& fg)
{
    floornow = fg;
}
Lift::~Lift()                                 //析构函数
{
}

void Lift::Lup()                           //电梯上行
{
    int m;
    m = floorgo;

    while (m <= floornow || m > total_floor)//判定输入的层数是否合法
    {
        cout << "楼层输入错误！请重试！\n";
        cout << "请输入要去的楼层：\n";
        cin >> m;
    }
    cout << "现在所处的楼层为：\n";
    for (int i = floornow; i <= floorgo; i++)//电梯运行UI
    {
        cout << "----\n";
        cout << "|" << i;
        if (i < 10)
            cout << " ";
        cout << "|\n";
        cout << "----\n";
        Sleep(1024);        //令系统暂停一会，模拟电梯上下层时需要的时间
    }
    floornow = floorgo;
    show_floor();
    return;
}
void Lift::Ldown()                      //电梯下行
{
    int m;
    m = floorgo;

    while (m >= floornow || m < minfloor)//判定输入的层数是否合法
    {
        cout << "楼层输入错误！请重试！\n";
        cout << "请输入要去的楼层：\n";
        cin >> m;
    }
    cout << "现在所处的楼层为：\n";
    for (int i = floornow; i >= floorgo; i--)//电梯运行UI
    {
        cout << "----\n";
        cout << "|" << i;
        if (i < 10)
            cout << " ";
        cout << "|\n";
        cout << "----\n";
        Sleep(1024);        //令系统暂停一会，模拟电梯上下层时需要的时间
    }
    floornow = floorgo;
    show_floor();
    return;
}

void Lift::floorget(const int& m)//获取要去的楼层数
{
    floorgo = m;
}