#include "Shape.h"
#include <iostream>
using namespace std;
Shape::Shape(int a, int b, float c){
	x = a; y = b; s = c;
}
void Shape::Show(){
	cout << "点的坐标：(" << x << "," << y << ")\n";
}
/*void Shape::GetArea() {
	s = 0;//default square
}*/
void  Shape::Set() {
	cout << "输入两点坐标：";
	cin >> x >> y;
}
Circle::Circle(int x, int y, int r, float c) :Shape(x, y, c) {
	radius = r;
}
void Circle::GetArea() {
	s = 3.14 * radius * radius;
}
void Circle::Show() {
	cout << "圆心坐标：(" << x << "," << y << ")\n";
	cout << "半径：" << radius << endl;
	cout << "面积：" << s << endl;
}
void Circle::Set() {
	cout << "输入圆心坐标：";
	cin >> x >> y;
	cout << "输入圆的半径：";
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
	cout << "长边：" << hi << endl;
	cout << "短边：" << lo << endl;
	cout << "面积：" << s << endl;
}
void Rectangle::Set() {
	cout << "输入长方形的两边：";
	cin >> x >> y;
}
Triangle::Triangle(int x, int y, float c) : Shape(x, y, c) {
	x2 = x3 = x; y2 = y3 = y;
}
void Triangle::GetArea() {
	double a, b, c;//三边长度
	a = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
	b = sqrt((x3 - x) * (x3 - x) + (y3 - y) * (y3 - y));
	c = sqrt((x2 - x3) * (x2 - x3)+ (y2 - y3) * (y2 - y3));
	double p;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));//利用海伦公式计算三角形的面积
}
void Triangle::Show() {
	cout << "三角形的三个顶点坐标为：" << endl;
	cout << "(" << x << "," << y << ")  ";
	cout << "(" << x2 << "," << y2 << ")  ";
	cout << "(" << x3 << "," << y3 << ")\n";
	cout << "面积为：" << s << endl;
}
void Triangle::Set() {
	cout << "输入三角形的三个顶点坐标：";
	cin >> x >> y >> x2 >> y2 >> x3 >> y3;
}