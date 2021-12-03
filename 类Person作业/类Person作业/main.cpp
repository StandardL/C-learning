#include <iostream>
#include "Person.h"
using namespace std;
int main()
{
	Person one;										//无参数，调用构造函数#1
	Person two("Zifeng");						//只输入一个参数，另一个调用默认参数#2
	Person three("Jason", "Huang");	//输入两个参数#2
	one.show();										//显示名字，下同
	cout << endl;
	one.FormalShow();							//正式地显示名字，下同
	cout << endl;
	two.show();
	cout << endl;
	two.FormalShow();
	cout << endl;
	three.show();
	cout << endl;
	three.FormalShow();
	cout << endl;
	return 0;
}