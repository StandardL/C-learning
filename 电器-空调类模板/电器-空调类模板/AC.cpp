#include <iostream>
#include <string>
using namespace std;
template <class T>
class Electric_app {
protected:
	string type;//��������
	string brand;
	T power;//���ʣ���λw
	T life;//��Ʒ���ڣ���λ����
public:
	Electric_app(string n = "Unknown", string b = "�����", T p = 100, T l = 10);
	~Electric_app();
	void Get();
	void Show();
};

template<class T>
Electric_app<T>::Electric_app(string n, string b, T p, T l) {
	cout << "���õ�������Ĺ��캯��~\n";
	type = n; brand = b; power = p; life = l;
}

template<class T>
Electric_app<T>::~Electric_app() {
	cout << "���õ����������������~\n";
}

template<class T>
void Electric_app<T>::Get() {
	cout << "��������������ͣ�"; getline(cin, type);
	cout << "�����������Ʒ�ƣ�"; getline(cin, brand);
	cout << "����������Ķ���ʣ�"; cin >> power; cin.get();
	cout << "������������������ڣ�"; cin >> life; cin.get();
	cout << "��������Ϣ������ϣ�\n";
}

template<class T>
void Electric_app<T>::Show() {
	cout << "���ͣ�" << type << endl;
	cout << "Ʒ�ƣ�" << brand << endl;
	cout << "����ʣ�" << power << "W\n";
	cout << "�������ڣ�" << life << "��\n";
}

template<class T>
class AC : public Electric_app<T> {
private:
	T tem_L;//����������¶�
	T tem_H;//����������¶�
	bool heat;//�Ƿ������ȹ��ܣ���Ϊ1����Ϊ0
	T Horse_power;//�յ���ƥ��
	string model;//�ͺ�
	string company;//������
	T elec_consume;//�ܺĵȼ�
public:
	AC(string n = "�յ�", string b = "�����", T p = 100, T li = 10,
		T low = -10, T high = 40, bool  he = 0, string m = "KFR-72", string c = "MI");
	~AC();
	void Get();
	void Consume_Elec();//�жϺĵ����
	void Show();
};

template<class T>
AC<T>::AC(string n, string b, T p, T li, T low, T high, bool he, string m, string c):Electric_app<T>(n,b,p,li) {
	cout << "���ÿյ�������Ĺ��캯��\n";
	tem_L = low; tem_H = high; heat = he; model = m; company = c;
}

template<class T>
AC<T>::~AC() {
	cout << "���ÿյ����������������\n";
}

template<class T>
void AC<T>::Get() {
	cout << "������յ�Ʒ�ƣ�"; getline(cin, this->brand);
	cout << "������յ��Ķ���ʣ�"; cin >> this->power; cin.get();
	cout << "������յ����������ڣ�"; cin >> this->life; cin.get();
	cout << "������յ��Ĺ����¶�����\n���ӵ͵��ߣ���"; cin >> tem_L >> tem_H; cin.get();
	cout << "������յ���ƥ����"; cin >> Horse_power; cin.get();
	cout << "������յ����ͺţ�"; getline(cin, model);
	cout << "������յ��������̣�"; getline(cin, company);
	Consume_Elec();
}

template<class T>
void AC<T>::Consume_Elec() {
	if (Horse_power >= 3 && this->power <= 3000) {
		elec_consume = 1;//һ����Ч
		return;
	}
	else if(Horse_power >= 3) {
		elec_consume = 3;//������Ч
		return;
	}
	if (Horse_power >= 2 && this->power <= 2000) {
		elec_consume = 1;//һ����Ч
		return;
	}
	else if(Horse_power >=2) {
		elec_consume = 3;//������Ч
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
	cout << "���ͣ�" << this->type << endl;
	cout << "Ʒ�ƣ�" << this->brand << endl;
	cout << "�����̣�" << company << endl;
	cout << "�����¶����䣺" << tem_L << "-" << tem_H << endl;
	cout << "����ʣ�" << this->power << "W\n";
	cout << "ƥ����" << Horse_power << endl;
	cout << "�������ڣ�" << this->life << "��\n";
	cout << "�ĵ������" << elec_consume << "����Ч\n";
}
void menu(){
	cout << "----------------------\n";
	cout << "��ӭʹ�õ���-�յ�ϵͳ��\n";
	cout << "���������ִ�����в�����\n";
	cout << "1.����1\n";
	cout << "2.�յ�1\n";
	cout << "3.�յ�2\n";
	cout << "4.�յ�3\n";
	cout << "0.�ر�ϵͳ\n";
	cout << "----------------------\n";
}
void menu2() {
		cout << "----------------------\n";
		cout << "���������ִ�����в�����\n";
		cout << "1.��ѯ��Ϣ\n";
		cout << "2.�޸���Ϣ\n";
		cout << "0.������һ���˵�\n";
		cout << "----------------------\n";
}
int main() {
	Electric_app<float> E1;//����
	AC<int> A1;//�յ�1
	AC<float> A2;//�յ�2
	AC<float> A3;//�յ�3
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
				default:cout << "�����������������룡\n";
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
				default:cout << "�����������������룡\n";
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
				default:cout << "�����������������룡\n";
					break;
				}
				cin >> op2; cin.get();
				if (op2 == 0) break;
			}
		}
			  break;
		case 0:cout << "ϵͳ�رգ�\n";
			break;
		default:cout << "�����������������룡\n";
			break;
		}
		cin >> op1; cin.get();
		if (op1 == 0) break;
	}

	return 0;
}