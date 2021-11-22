//C++Class Exexrcise2
#include <iostream>
using namespace std;

//1
void sort(int *p,int len);
int main()
{
    int len = 0;                                                        //len为数组的有效长度
    int c = 0;
    int a[100] = {0};                                                   //定义并初始化数组
    int *p = a;                                                         //p为指向数组a的指针

    cout << "Please enter some integers(less than 100): \n" ;
    while(1)
    {
        cin >> a[c];
        len++;                                                          //循环输入并确定数组的有效位数
        if (cin.get() == '\n')
            break;
        else
            c++;
    }

    sort(a,len);                                                        //调用排序函数

    cout << "The sorted array: ";                                       //输出排序好的数组
    for (int i = 0; i < len; i++)
        cout << a[i] << " ";
    cout << endl;
                                                                        //输出数组的中间值
    if (len%2 != 0)                                                     //如果余数为零，说明数组有奇数个元素
    {
        cout << "The middle integar of array: " << (p+len/2) << endl;
        cout << "The address of this integar: " << *(p+len/2) << endl;
    }
    else                                                                //否则，数组有偶数个元素
    {
        int sao;
        sao = (len+1)/2-1;
        cout << "The middle integar of array: " << *(p+sao) << endl;
        cout << "The address of this integar: " << p+sao << endl;
    }

    system("pause");                             //因使用Visual Studio Code，故需令系统暂停，便于观测输出结果
    return 0;
}

void sort(int *p, int len)                                              //通过指针指向这个待排序的数组
{
    int i, j, k;                                                        //循环用变量
    int cache;                                                          //缓存数组
    cout << "Sorting now...\n";

    for (i = 0; i < len-1; i++)                                         //对数组进行排序
    {
        k = i;
        for (j = i + 1; j < len; j++)
            if (p[j] < p[k])
            {
                k = j;
                cache = p[k];
                p[k] = p[i];
                p[i] = cache;
            }
    }
}

/*2
int comp(string a,string b[]);                  //计算距离的函数
int main()
{
    string a,b[2];                              //a用户输入的英文单词列表，而b为用户需要查询的两个单词
    int away = 0;                               //记录两个单词之间的距离

    cout << "Please enter some words (>10): \n";
    getline(cin, a);                            //获取用户输入的整行单词
    cout << "Please enter two words (must appear before): \n";
    for (int i = 0; i < 2; i++)
    {
        cin >> b[i];
    }
    away = comp(a, b);                          //调用计算距离的函数

    cout << "Apart: " << away << " words.\n";   //输出两个单词间的的距离

    system ("pause");
    return 0;
}

int comp(string a, string b[])
{
    int sizea = a.size();                       //求数组a的长度
    int sizeb1 = b[0].size();                   //求数组b的第1行的长度
    int sizeb2 = b[1].size();                   //求数组b的第2行的长度
    int l,j;                                    //l,j均为在循环中使用到的变量
    int k1,k2;                                  //k1为数组a中，和b第一个单词相同的位置
    int sum = 0;                                //统计空格个数

    for (int i = 0; i < sizea; i++)             //检索两次输入之中的单词是否有相同的
    {
        l = i;
        for(j = 0; j < sizeb1; )
        {
            if (a[l] != b[0][j])
                break;
            else
            {
                k1 = i;
                l++;
                j++;
            }
        }
        if (j == sizeb1)                        //当输入的单词能在第一次输入的语句中找到，那么就跳出循环
            break;
    }
    for (int i = k1; i < sizea; i++)            //检索两次输入之中的单词是否有相同的
    {
        l = i;
        for(j = 0; j < sizeb2; )
        {
            if (a[l] != b[1][j])
                break;
            else
            {
                k2 = i;
                l++;
                j++;
            }
        }
        if (j == sizeb2)                        //当输入的单词能在第一次输入的语句中找到，那么就跳出循环
            break;
    }
    for (int i = k1; i < k2; i++)               //用于检索两个单词之间有多少个空格
    {
        if (a[i] == ' ')
            sum++;
    }
    return sum;
}*/

/*3.1
void output(int n);                     //n为数组中的元素个数
int *p;                                 //全局指针，便于在output函数中调用
int main()
{
    cout << "Input some numbers(less than 100): \n";
    int a[100] = {0};
    int i = 0;
    p = a;                              //让指针p指向数组a

    while(1)                            //记录输入的数字量
    {
        cin >> a[i];
        if (cin.get() == '\n')
            break;
        else
            i++;
    }
    output(i);                          //调用函数

    system("pause");
    return 0;
}
void output(int n)
{    
    cout << p[n] << " ";
    if(n == 0)
        return;
    else
        output(n-1);                    //层层套娃，逆序输出数组
    return;
}*/

/*3.2
int calc(int n);                                            //n为上楼梯的级数
int main()
{
    cout << "How many stairs does Xiaoming want to go? ";
    int n, a;                                               //n为小明要上的台阶数，a为小明上n个台阶的方法数
    cin >> n;
    a = calc(n);
    cout << "Xiaoming has " << a << " ways to reach desitination.\n";
    system("pause");
    return 0;
}
int calc(int n)
{                                                           //对斐波那契数列进行分类。
    if (n == 0)                                             //n为0时，返回0
        return 0;
    else if (n == 1)                                        //n为1时，返回1
        return 1;
    else if (n == 2)                                        //n为2时，返回2
        return 2;
    else                                                    //n大于2时，n的值为前两项之和
        n = calc(n - 2) + calc(n - 1);
    return n;
}*/