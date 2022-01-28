#include <iostream>
#include <string>
using namespace std;
template <class T>
class Electric_app {
protected:
	string type;//电器类型
	string brand;
	T power;//功率，单位w
	T life;//产品周期，单位是年
public:
	Electric_app(string n = "Unknown", string b = "万国牌", T p = 100, T l = 10);
	~Electric_app();
	void Get();
	void Show();
};

template<class T>
Electric_app<T>::Electric_app(string n, string b, T p, T l) {
	cout << "调用电器基类的构造函数~\n";
	type = n; brand = b; power = p; life = l;
}

template<class T>
Electric_app<T>::~Electric_app() {
	cout << "调用电器基类的析构函数~\n";
}

template<class T>
void Electric_app<T>::Get() {
	cout << "请输入电器的类型："; getline(cin, type);
	cout << "请输入电器的品牌："; getline(cin, brand);
	cout << "请输入电器的额定功率："; cin >> power; cin.get();
	cout << "请输入电器的生命周期："; cin >> life; cin.get();
	cout << "电器的信息输入完毕！\n";
}

template<class T>
void Electric_app<T>::Show() {
	cout << "类型：" << type << endl;
	cout << "品牌：" << brand << endl;
	cout << "额定功率：" << power << "W\n";
	cout << "生命周期：" << life << "年\n";
}

template<class T>
class AC : public Electric_app<T> {
private:
	T tem_L;//工作的最低温度
	T tem_H;//工作的最高温度
	bool heat;//是否有制热功能，是为1，否为0
	T Horse_power;//空调的匹数
	string model;//型号
	string company;//生产商
	T elec_consume;//能耗等级
public:
	AC(string n = "空调", string b = "万国牌", T p = 100, T li = 10,
		T low = -10, T high = 40, bool  he = 0, string m = "KFR-72", string c = "MI");
	~AC();
	void Get();
	void Consume_Elec();//判断耗电情况
	void Show();
};

template<class T>
AC<T>::AC(string n, string b, T p, T li, T low, T high, bool he, string m, string c):Electric_app<T>(n,b,p,li) {
	cout << "调用空调派生类的构造函数\n";
	tem_L = low; tem_H = high; heat = he; model = m; company = c;
}

template<class T>
AC<T>::~AC() {
	cout << "调用空调派生类的析构函数\n";
}

template<class T>
void AC<T>::Get() {
	cout << "请输入空调品牌："; getline(cin, this->brand);
	cout << "请输入空调的额定功率："; cin >> this->power; cin.get();
	cout << "请输入空调的生命周期："; cin >> this->life; cin.get();
	cout << "请输入空调的工作温度区间\n（从低到高）："; cin >> tem_L >> tem_H; cin.get();
	cout << "请输入空调的匹数："; cin >> Horse_power; cin.get();
	cout << "请输入空调的型号："; getline(cin, model);
	cout << "请输入空调的生产商："; getline(cin, company);
	Consume_Elec();
}

template<class T>
void AC<T>::Consume_Elec() {
	if (Horse_power >= 3 && this->power <= 3000) {
		elec_consume = 1;//一级能效
		return;
	}
	else if(Horse_power >= 3) {
		elec_consume = 3;//三级能效
		return;
	}
	if (Horse_power >= 2 && this->power <= 2000) {
		elec_consume = 1;//一级能效
		return;
	}
	else if(Horse_power >=2) {
		elec_consume = 3;//三级能效
		return;
	}
	if (Horse_power >= 1 && this->power <= 1000) {
		elec_consume = 1;
		return;
	}
	else if (Horse_power >= 1) {
		elec_consume = 2;
		return;
	}
}

template<class T>
void AC<T>::Show() {
	cout << "类型：" << this->type << endl;
	cout << "品牌：" << this->brand << endl;
	cout << "生产商：" << company << endl;
	cout << "工作温度区间：" << tem_L << "-" << tem_H << endl;
	cout << "额定功率：" << this->power << "W\n";
	cout << "匹数：" << Horse_power << endl;
	cout << "生命周期：" << this->life << "年\n";
	cout << "耗电情况：" << elec_consume << "级能效\n";
}
void menu(){
	cout << "----------------------\n";
	cout << "欢迎使用电器-空调系统！\n";
	cout << "请输入数字代码进行操作。\n";
	cout << "1.电器1\n";
	cout << "2.空调1\n";
	cout << "3.空调2\n";
	cout << "4.空调3\n";
	cout << "0.关闭系统\n";
	cout << "----------------------\n";
}
void menu2() {
		cout << "----------------------\n";
		cout << "请输入数字代码进行操作。\n";
		cout << "1.查询信息\n";
		cout << "2.修改信息\n";
		cout << "0.返回上一级菜单\n";
		cout << "----------------------\n";
}
int main() {
	Electric_app<float> E1;//风扇
	AC<int> A1;//空调1
	AC<float> A2;//空调2
	AC<float> A3;//空调3
	menu();
	int op1,op2;
	cin >> op1; cin.get();
	while (true)
	{
		switch (op1)
		{
		case 1: {
			menu2();
			cin >> op2; cin.get();
			while (true)
			{
				switch (op2)
				{
				case 1:E1.Show();
					break;
				case 2:E1.Get();
					break;
				case 0:system("cls");
					break;
				default:cout << "输入有误！请重新输入！\n";
					break;
				}
				cin >> op2; cin.get();
				if (op2 == 0) break;
			}
		}
			  break;
		case 2: {
			menu2();
			cin >> op2; cin.get();
			while (true)
			{
				switch (op2)
				{
				case 1:E1.Show();
					break;
				case 2:E1.Get();
					break;
				case 0:system("cls");
					break;
				default:cout << "输入有误！请重新输入！\n";
					break;
				}
				cin >> op2; cin.get();
				if (op2 == 0) break;
			}
		}
			  break;
		case 3: {
			menu2();
			cin >> op2; cin.get();
			while (true)
			{
				switch (op2)
				{
				case 1:E1.Show();
					break;
				case 2:E1.Get();
					break;
				case 0:system("cls");
					break;
				default:cout << "输入有误！请重新输入！\n";
					break;
				}
				cin >> op2; cin.get();
				if (op2 == 0) break;
			}
		}
			  break;
		case 0:cout << "系统关闭！\n";
			break;
		default:cout << "输入有误！请重新输入！\n";
			break;
		}
		cin >> op1; cin.get();
		if (op1 == 0) break;
	}

	return 0;
}