#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
struct node
{
    char name[20];
    int parameter;
    int priority;
};
bool operator < (const node &a, const node &b)
{
    if (a.priority > b.priority)
        return true;
    else return false;
}

int main()
{
    priority_queue <node> q;
    char info_got[100];
    
    while (cin >> info_got)
    {
        if (strcmp(info_got, "GET") == 0)
        {
            if (!q.empty())
            {
                node temp;
                temp = q.top();
                q.pop();
                cout << temp.name << " " << temp.parameter << endl;
            }
            else 
                cout << "EMPTY QUEUE!\n";
        }
        else if (strcmp(info_got, "PUT") == 0)
        {
            node temp;
            cin >> temp.name;
            cin >> temp.parameter;
            cin >> temp.priority;
            q.push(temp);
        }
    }
    

    system("pause");
    return 0;
}
