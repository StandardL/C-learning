#include "Shape.h"
#include <iostream>
using namespace std;
Shape::Shape(int a, int b, float c){
	x = a; y = b; s = c;
}
void Shape::Show(){
	cout << "������꣺(" << x << "," << y << ")\n";
}
/*void Shape::GetArea() {
	s = 0;//default square
}*/
void  Shape::Set() {
	cout << "�����������꣺";
	cin >> x >> y;
}
Circle::Circle(int x, int y, int r, float c) :Shape(x, y, c) {
	radius = r;
}
void Circle::GetArea() {
	s = 3.14 * radius * radius;
}
void Circle::Show() {
	cout << "Բ�����꣺(" << x << "," << y << ")\n";
	cout << "�뾶��" << radius << endl;
	cout << "�����" << s << endl;
}
void Circle::Set() {
	cout << "����Բ�����꣺";
	cin >> x >> y;
	cout << "����Բ�İ뾶��";
	cin >> radius;
}
Rectangle::Rectangle(int x, int y, float c) :Shape(x, y, c) {
	//a = x; b = y;
}
void Rectangle::GetArea() {
	s = x * y;
}
void Rectangle::Show() {
	int lo, hi;
	if (x > y) {
		hi = x; lo = y;
	}
	else {
		hi = y; lo = x;
	}
	cout << "���ߣ�" << hi << endl;
	cout << "�̱ߣ�" << lo << endl;
	cout << "�����" << s << endl;
}
void Rectangle::Set() {
	cout << "���볤���ε����ߣ�";
	cin >> x >> y;
}
Triangle::Triangle(int x, int y, float c) : Shape(x, y, c) {
	x2 = x3 = x; y2 = y3 = y;
}
void Triangle::GetArea() {
	double a, b, c;//���߳���
	a = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
	b = sqrt((x3 - x) * (x3 - x) + (y3 - y) * (y3 - y));
	c = sqrt((x2 - x3) * (x2 - x3)+ (y2 - y3) * (y2 - y3));
	double p;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));//���ú��׹�ʽ���������ε����
}
void Triangle::Show() {
	cout << "�����ε�������������Ϊ��" << endl;
	cout << "(" << x << "," << y << ")  ";
	cout << "(" << x2 << "," << y2 << ")  ";
	cout << "(" << x3 << "," << y3 << ")\n";
	cout << "���Ϊ��" << s << endl;
}
void Triangle::Set() {
	cout << "���������ε������������꣺";
	cin >> x >> y >> x2 >> y2 >> x3 >> y3;
}