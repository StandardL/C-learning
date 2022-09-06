#include <iostream>
#include <queue>
using namespace std;
int maze[12][12];
int m[8][2] = { -2,-1,-2,1,-1,-2,-1,2,1,-2,1,2,2,-1,2,1 };

void reset() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			if (i < 2 || i > 9)maze[i][j] = -1;
			else {
				if (j < 2 || j > 9)maze[i][j] = -1;
				else maze[i][j] = 0;
			}
		}
	}
}
struct DataType {
	int x;
	int y;
	int step;
};

void Calculate(int i1, int j1, int i2, int j2) {
	if (i1 == i2 && j1 == j2) {
		cout << "To get from " << char(i1 + 'a' - 2) << j1 - 1 << " to ";
		cout << char(i2 + 'a' - 2) << j2 - 1 << " takes 0 knight moves." << endl;
		return;
	}
	else {
		queue<DataType>q;
		DataType t1, t2; int loop;
		t1.x = i1; t1.y = j1;
		q.push(t1);
		while (!q.empty()) {
			t1 = q.front(); q.pop();
			for (loop = 0; loop < 8; loop++) {
				t2.x = t1.x + m[loop][0];
				t2.y = t1.y + m[loop][1];
				if (t2.x == i1 && t2.y == j1)continue;
				if (maze[t2.x][t2.y] != -1) {
					maze[t2.x][t2.y] = maze[t1.x][t1.y] + 1; 
					q.push(t2);
				}
				if ((t2.x == i2) && (t2.y == j2)) {
					cout << "To get from " << char(i1 + 'a' - 2) << j1 - 1 << " to ";
					cout << char(i2 + 'a' - 2) << j2 - 1 << " takes " << maze[t2.x][t2.y] << " knight moves." << endl;
					return;
				}
			}	
		}
	}
}
char s1[5]; char s2[5];
int main() {
	while (cin >> s1 >> s2) {
		reset();
		int x1, y1, x2, y2;
		x1 = s1[0] - 'a' + 2; y1 = s1[1] - '0' + 1;
		x2 = s2[0] - 'a' + 2; y2 = s2[1] - '0' + 1;
		Calculate(x1, y1, x2, y2);
	}
	return 0;
}