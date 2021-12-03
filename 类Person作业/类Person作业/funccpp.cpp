#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;
Person::Person()	//Ĭ������Ϊ��
{
	lname = ""; 
	fname[0] = '\0'; 
}
Person::Person(const string& ln, const char* fn)
{
	lname = ln;
	strcpy_s(fname, fn);
}
void Person::show() const
{
	cout << fname << " " << lname;
}
void Person::FormalShow() const
{
	cout << lname << ", " << fname;
}