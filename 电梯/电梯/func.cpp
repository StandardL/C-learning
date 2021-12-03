#include <iostream>
#include <Windows.h>
#include "elevator.h"
using namespace std;

void menu()
{
    cout << "-------------------\n";
    cout << "��ӭ����������\n";
    cout << "1.����\n";
    cout << "2.����\n";
    cout << "9.����\n";
    cout << "0.�˳�\n";
    cout << "�������ִ����Բ���\n";
    cout << "--------------------\n";
}

void Lift::show_floor()
{
    cout << "��ǰ����¥��Ϊ��" << floornow << endl;
}

Lift::Lift()                                    //Ĭ�Ϲ��캯��
{
    floornow = 1;
    floorgo = 1;
}
Lift::Lift(const int& fg)
{
    floornow = fg;
}
Lift::~Lift()                                 //��������
{
}

void Lift::Lup()                           //��������
{
    int m;
    m = floorgo;

    while (m <= floornow || m > total_floor)//�ж�����Ĳ����Ƿ�Ϸ�
    {
        cout << "¥��������������ԣ�\n";
        cout << "������Ҫȥ��¥�㣺\n";
        cin >> m;
    }
    cout << "����������¥��Ϊ��\n";
    for (int i = floornow; i <= floorgo; i++)//��������UI
    {
        cout << "----\n";
        cout << "|" << i;
        if (i < 10)
            cout << " ";
        cout << "|\n";
        cout << "----\n";
        Sleep(1024);        //��ϵͳ��ͣһ�ᣬģ��������²�ʱ��Ҫ��ʱ��
    }
    floornow = floorgo;
    show_floor();
    return;
}
void Lift::Ldown()                      //��������
{
    int m;
    m = floorgo;

    while (m >= floornow || m < minfloor)//�ж�����Ĳ����Ƿ�Ϸ�
    {
        cout << "¥��������������ԣ�\n";
        cout << "������Ҫȥ��¥�㣺\n";
        cin >> m;
    }
    cout << "����������¥��Ϊ��\n";
    for (int i = floornow; i >= floorgo; i--)//��������UI
    {
        cout << "----\n";
        cout << "|" << i;
        if (i < 10)
            cout << " ";
        cout << "|\n";
        cout << "----\n";
        Sleep(1024);        //��ϵͳ��ͣһ�ᣬģ��������²�ʱ��Ҫ��ʱ��
    }
    floornow = floorgo;
    show_floor();
    return;
}

void Lift::floorget(const int& m)//��ȡҪȥ��¥����
{
    floorgo = m;
}