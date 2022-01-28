#include "Shape.h"
#include <iostream>
using namespace std;
int main() {
	Circle c1, c2;
	Rectangle r1, r2;
	Triangle t1, t2;//, t3;
	c1.Set(); c1.GetArea(); c1.Show();
	c2.Set(); c2.GetArea(); c2.Show();
	r1.Set(); r1.GetArea(); r1.Show();
	r2.Set(); r2.GetArea(); r2.Show();
	t1.Set(); t1.GetArea(); t1.Show();
	t2.Set(); t2.GetArea(); t2.Show();
//	t3.Set(); t3.GetArea(); t3.Show();
	return 0;
}