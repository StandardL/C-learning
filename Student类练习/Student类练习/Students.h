#ifndef STUDENT_
#define STUDENT_
#include <string>
class Student
{
private:
	int number;
	std::string name;
	int sex;//1为男，2为女
	int year_birth;
	int month_birth;
	int day_birth;
	//以上三个为出生日期
	int grade;
	int class_num;
	std::string collage;//院系
	std::string section;//专业
public:
	Student();//缺省
	Student(int num, int sexual, std::string n);//带学号，性别和姓名
	Student(int num, int sexual, std::string n, int y = 2021, int m = 1, int d = 1);//带默认参数的构造函数
	void SetInfo();
	void Show();
};
void menu();//操作菜单

#endif // !STUDENT_
