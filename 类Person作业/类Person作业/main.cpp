#include <iostream>
#include "Person.h"
using namespace std;
int main()
{
	Person one;										//�޲��������ù��캯��#1
	Person two("Zifeng");						//ֻ����һ����������һ������Ĭ�ϲ���#2
	Person three("Jason", "Huang");	//������������#2
	one.show();										//��ʾ���֣���ͬ
	cout << endl;
	one.FormalShow();							//��ʽ����ʾ���֣���ͬ
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