#ifndef STUDENT_
#define STUDENT_
#include <string>
class Student
{
private:
	int number;
	std::string name;
	int sex;//1Ϊ�У�2ΪŮ
	int year_birth;
	int month_birth;
	int day_birth;
	//��������Ϊ��������
	int grade;
	int class_num;
	std::string collage;//Ժϵ
	std::string section;//רҵ
public:
	Student();//ȱʡ
	Student(int num, int sexual, std::string n);//��ѧ�ţ��Ա������
	Student(int num, int sexual, std::string n, int y = 2021, int m = 1, int d = 1);//��Ĭ�ϲ����Ĺ��캯��
	void SetInfo();
	void Show();
};
void menu();//�����˵�

#endif // !STUDENT_
