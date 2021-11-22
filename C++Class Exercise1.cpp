//C++ class exercise 1
#include <iostream>
#include <string>
using namespace std;

/*1
int main()
{
    int max,i;                          //max用于缓存数组中最大的那个数,i用于for循环
    int numberget[100];                 //新建一个100个元素静态数组
    int len = 0;


    for (i = 0; i == 0 ; )               //用for循环进行输入
        {
            cin >> numberget[len];       
            if(numberget[len] == 0)      //当检测到输入为0时，对i+1，跳出循环
                i = i + 1;
            else
                len = len + 1;
        }
    
    max = numberget[0];                  //默认把数组中的第一个数作为初始最大值，防止负数的出现导致程序错误
    
    for (i = 0; i < len ; i++)
        {
            if(numberget[i] >= max)      //对数组中的每一个元素都进行比较，是否为最大的
                max = numberget[i];      //若是，将该元素存入到max缓存中
        }
    
    cout << "The biggest is " << max;    //输出最大值

    system ("pause");//因使用Visual Studio Code，故需令系统暂停，便于观测输出结果
    return 0;
}*/

/*2
#include <string>
int main()
{
    string number;                                     //新建一个C++风格的数组
    cin >> number;
    
    for (int i = 0; i <= number.size() - 1; i++)
        cout << number[i] << " ";                      //正序输出数组
    cout << endl;

    for (int i = number.size() - 1; i >= 0; i--)
        cout << number[i] << " ";                      //倒序输出数组

    system ("pause");//因使用Visual Studio Code，故需令系统暂停，便于观测输出结果
    return 0;
}
*/

/*3
#include <cstring>
int main()
{
    int t = 0;                                               //变量t用于计算输入的单词数
    char words[100];
    cout << "Enter words (to stop, type the word 'done'): ";
    
    for (;strcmp(words,"done") != 0;t++)                     //当输入的words中的单词为done时，跳出循环
        cin >> words;
    
    cout << "You entered a total of " << t-1 << " words.\n" ;//输出统计的单词数量

    system("pause");                        //因使用Visual Studio Code，故需令系统暂停，便于观测输出结果
    return 0;
}
*/

/*4
struct Car
{
    char Origin[30];
    int Year;
};                                                          //新建结构体，结构内有产地和生产年份

int main()
{
    int cn;                                                 //cn为动态结构数组的元素个数
    cout << "How many cars do you wish to catalog? ";
    cin >> cn;                                              //询问用户有多少辆汽车要输入

    Car *carinput = new Car [cn];                           //新建一个动态结构

    for (int i = 0; i < cn; i++)
    {
        cout << "Car#" << i+1 << endl;
        cout << "Please enter the place of production: ";
        cin.get();                                          //用于吃掉输入cn后产生的回车键
        cin.get(carinput[i].Origin,30);                     //输入并存储产地
        cout << "Please enter the year made: ";
        cin >> carinput[i].Year;                            //输入并存储生产年份
    }

    cout << "Here is your collection: \n";
    
    for (int i = 0; i < cn; i++)
        cout << carinput[i].Year << " " << carinput[i].Origin << endl;
                                                            //该循环为输出用户输入的车辆信息
    delete [] carinput;                                     //删除动态结构分配的空间

    system ("pause");                                       //因使用Visual Studio Code，故需令系统暂停，便于观测输出结果
    return 0;
}*/

//5.1
int main()
{
    int i,j,k;                                      //i为循环用数，j，k为比较用数
    cout << "How many sentences do you want to input? ";
    int sent;
    cin >> sent;                                    //sent用于确定用户需要输入的句子个数

    char s[sent][100];                              //新建一个动态二维数组
    cin.get();                                      //吃掉输入sent后产生的空格

    for (i = 0; i < sent; i++)
    {
        cin.getline(s[i],99);                       //循环输入每一行数组
    }

    char cache[100];                                //新建一个缓存数组
    for (i = 0; i < sent-1; i++)
    {
        k = i;
        for (j = i + 1; j < sent ;j++)              //数组排序，
            if (strlen(s[j]) < strlen(s[k]))
                k = j;
            strcpy(cache,s[k]);                     //if条件不成立时，k=i，这意味着数组位置不变
            strcpy(s[k],s[i]);                      //if条件成立时，k=j，这意味着相邻两个数组位置互换
            strcpy(s[i],cache);                     //双重循环的意义在于，总能把最短的字符串数组尽可能的往前移
    }

    cout << "Now This is what you have entered: \n";//输出结果
    for (i = 0; i < sent; i++)
    {
        for (j = 0; j < strlen(s[i]); j++)
            cout << s[i][j];
        cout << endl;
    }

    system ("pause");                               //因使用Visual Studio Code，故需令系统暂停，便于观测输出结果
    return 0;
}

/*5.2
int main()
{
    int i,j,k;                                      //i为循环用数，j，k为比较用数
    cout << "How many sentences do you want to input? ";
    int sent;
    cin >> sent;                                    //sent用于确定用户需要输入的句子个数
    string s[sent];

    cin.get();                                      //吃掉输入sent后的换行符
    for (i = 0; i < sent; i++)
    {
        getline(cin,s[i]);                          //循环输入每一行数组
    }

    string cache;                                   //新建一个缓存数组

    for (i = 0; i < sent-1; i++)
    {
        k = i;
        for (j = i + 1; j < sent ;j++)              //数组排序，
            if (s[j].size() < s[k].size())
                k = j;
            cache = s[k];                           //if条件不成立时，k=i，这意味着数组位置不变
            s[k] = s[i];                            //if条件成立时，k=j，这意味着相邻两个数组位置互换
            s[i] = cache;                           //双重循环的意义在于，总能把最短的字符串数组尽可能的往前移
    }

    cout << "\nNow This is what you have entered: \n\n";//输出结果
    for (i = 0; i < sent; i++)
    {
        cout << s[i] << endl;
    }

    system ("pause");                               //因使用Visual Studio Code，故需令系统暂停，便于观测输出结果
    return 0;
}*/

/*5.2 EOF Can't work.
int main()
{
    int i,j,k;                                      //i为循环用数，j，k为比较用数
    cout << "Please enter CTRL+Z to stop input.\n" << "Now enter your sentences:\n";
    int num=0;
    int TCache;
    
    while (cin.fail() == false )
    { 
        cin >> TCache;   //sent用于确定用户需要输入的句子个数
        num++;    
    }                             
    string s[num];
    
    for (i = 0; i < num -1; i++)
    {
        getline(cin,s[i]);
    }

    /*cin.get();                                      //吃掉输入sent后的换行符
    for (i = 0; i < sent; i++)
    {
        getline(cin,s[i]);                          //循环输入每一行数组
    }*/

   /* string cache;                                   //新建一个缓存数组

    for (i = 0; i < num-1; i++)
    {
        k = i;
        for (j = i + 1; j < num ;j++)              //数组排序，
            if (s[j].size() < s[k].size())
                k = j;
            cache = s[k];                           //if条件不成立时，k=i，这意味着数组位置不变
            s[k] = s[i];                            //if条件成立时，k=j，这意味着相邻两个数组位置互换
            s[i] = cache;                           //双重循环的意义在于，总能把最短的字符串数组尽可能的往前移
    }

    cout << "\nNow This is what you have entered: \n\n";//输出结果
    for (i = 0; i < num; i++)
    {
        cout << s[i] << endl;
    }

    system ("pause");                               //因使用Visual Studio Code，故需令系统暂停，便于观测输出结果
    return 0;
}*/