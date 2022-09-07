#include <iostream>
#include <string>
using namespace std;
struct Listnode
{
    string dna;
    int sorted;
    Listnode *next;
};
void bubble(Listnode *head, Listnode *end);
void count(Listnode *head);
void Print(Listnode *head);
Listnode *Creat(int n);

int main()
{
    int n, m;
    cin >> n >> m;
    Listnode *head = new Listnode;
    head->next = Creat(m);
    // 链表的建立
    count(head); // 统计数量
    bubble(head, 0);  // 冒泡排序
    Print(head->next); // 输出

    system("pause");
    return 0;
}

void bubble(Listnode *head, Listnode *end)
{
    if(head == 0 || head->next == end) return;
    Listnode *p, *q; int x; string s;
    p = head;
    while (p->next != end)
    {
        q = p->next;
        if(p->sorted > q->sorted)
        {
            s = p->dna; x = p->sorted;
            p->dna = q->dna; p->sorted = q->sorted;
            q->dna = s; q->sorted = x;
        }
        p = p->next;
    }
    bubble(head, p);
}

void count(Listnode *head)
{
    if(head == 0) return;
    string str;
    str = head->dna;
    int a;
    a = str.size();
    int sum = 0;
    for (int i = 0; i < a-1; i++)
    {
        for(int j = i+1; j < a; j++)
        {
            if(str[i] > str[j])
            sum++;
        }
    }
    head->sorted = sum;
    count(head->next);
}

void Print(Listnode *head)
{
    if(head == 0) return;
    cout << head->dna << endl;
    Print(head->next);
}

Listnode *Creat(int n)
{
    if(n == 0) return 0;
    Listnode *p;
    int x;
    p = new Listnode;
    cin >> p->dna;
    p->next = Creat(n-1);
    return p;
}