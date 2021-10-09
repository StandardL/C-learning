//本项目是c++ primer plus第2章的练习题
#include <iostream>
using namespace std;


/*1
int main()
{
    
    cout << "My name is Standard_L." << endl;
    cout << "My address is 123." << endl;
    system ("pause");
    return 0;
}*/


/*2
int lenth(int);//函数原型
int main()
{
    int lenth1;
    int yard = lenth(lenth1);
    cout << "Enter the lenth:" ;
    cin  >> lenth1;
    cout << "Lenth = " << lenth1 << " ." << endl;
    cout << "Yard = " << yard << " ." << endl;
    system("pause");
    return 0;
}
int lenth(int sts)//函数定义
{
    int yard = 220 * sts;
    return yard;
}*/


void mice();
void run();
int main()
{
    for (int i = 0; i < 2; i++)
    {
        mice() ;
    }
    for (int i = 0; i < 2; i++)
    {
        run() ;
    }   
    system ("pause");
    return 0;
}
void mice()
{
    cout << "Three blind mice." << endl;
}
void run()
{
    cout << "See how they run." << endl;
}