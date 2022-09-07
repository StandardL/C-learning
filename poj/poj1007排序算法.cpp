#include <iostream>
#include <cstring>
using namespace std;
int count(char *p, int &a, int &b);
void sort(char **p, int &a, int &b);
int main()
{
    int n, m;
    cin >> n >> m;
    cin.get();

    char **ch = new char*[m+1];
    for (int i = 0; i < m+1; i++)
    {
        ch[i] = new char [n+1];
    }



    for (int i = 0; i < m; i++)
        cin >> ch[i];
    
    sort(ch, n, m);

    for (int i = 0; i < m; i++)
        cout << ch[i] << endl;



    for (int i = 0; i < m+1; i++)
    {
        delete ch[i];
        ch[i] = NULL;
    }
    delete [] ch;

    system("pause");
    return 0;
}

int count(char *p, int &a, int &b)// a = n, b = m
{
    int sum = 0;
    for (int i = 0; i < a-1; i++)
    {
        for(int j = i+1; j < a; j++)
        {
            if(p[i] > p[j])
            sum++;
        } 
    }
    

    return sum;
}

void sort(char **p, int &a, int &b)
{
    for (int j = 0; j < b-1; j++)
    {
        for(int i = j+1; i < b; i++)
        {
            if (count(p[j], a, b) > count(p[i], a, b))
            {
                char *temp = new char[a+1];
                strcpy(temp, p[j]);
                strcpy(p[j], p[i]);
                strcpy(p[i], temp);
            }
        }
    }

    return;
}