#ifndef ELEVATOR
#define ELEVATOR
class Lift
{
private:
	int floornow;							//��ǰ¥����
	int floorgo;								//Ҫȥ��¥����
public:
	Lift();										//���캯��
	Lift(const int& fg);
	~Lift();										//��������
	void show_floor();					//��ʾ��ǰ¥��
	void Lup();								//��������
	void Ldown();							//��������
	void floorget(const int&);
};

void menu();								//�����˵�
const short total_floor = 15;		//��¼¥������
const short minfloor = 1;			//���Ϊ1¥
#endif // !elevator