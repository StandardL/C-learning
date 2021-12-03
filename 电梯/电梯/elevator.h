#ifndef ELEVATOR
#define ELEVATOR
class Lift
{
private:
	int floornow;							//当前楼层数
	int floorgo;								//要去的楼层数
public:
	Lift();										//构造函数
	Lift(const int& fg);
	~Lift();										//析构函数
	void show_floor();					//显示当前楼层
	void Lup();								//电梯上行
	void Ldown();							//电梯下行
	void floorget(const int&);
};

void menu();								//操作菜单
const short total_floor = 15;		//记录楼层总数
const short minfloor = 1;			//最低为1楼
#endif // !elevator