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


/*3
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
*/


/*4
int age(int);
int main()
{
    int AGE,months;
    cout << "Enter your age:" ;
    cin >> AGE ;
    months = age(AGE);
    cout << "You have pass " << months << " months."<< endl;
    system ("pause");
    return 0;
}
int age(int sts)
{
    return 12*sts;
}
*/


/*5
double c(double);
int main()
{
    double C;
    cout << "Please enter a Celsius value: " ;
    cin >> C;
    double F = c(C);
    cout << C << " degrees Celsius is " << F << " degrees Fahreheit." << endl;
    cout << "Thank you for using this C++ programme." << endl;
    system ("pause");
    return 0;
}
double c(double sts)
{
    double f = 1.8*sts + 32.0;
    return f;
}
*/


/*6
double lightyear(double);
int main()
{
    double ly;
    cout << "Enter the number of light years: " ;
    cin >> ly;
    double au = lightyear(ly);
    cout << ly << " light years = " << au << " astronomical units." << endl;
    system ("pause");
    return 0;
}
double lightyear(double sts)
{
    double au = 63240*sts;
    return au;
}
*/


//7
void time(int);
int main()
{
    int h,m;
    cout << "Enter the number of hours: " ;
    cin >> h;
    cout << "Enter the number of minutes: " ;
    cin >> m;
    cout << "Time: ";
    time(h);
    cout << ":";
    time(m);
    system ("pause");
    return 0;
}
void time(int sts)
{
    cout << sts ;
}

//至此，第二章的编程练习全部完成。