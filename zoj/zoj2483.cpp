#include <iostream>
#include <stack>
#include <cstring>
#include <stdio.h>
using namespace std;
char cmp_and(char m, char n)
{
    if (m == 'V' && n == 'V')
        return 'V';
    else 
        return 'F';
}
char cmp_or(char m, char n)
{
    if (m == 'V' || n == 'V')
        return 'V';
    else 
        return 'F';
}
char fun_not(char m)
{
    if (m == 'V')
        return 'F';
    else 
        return 'V';
}
int main()
{
    stack <char> st;
    stack <char> op;
    char s[111];
    char ans;
    int count = 1;

    while (cin.getline(s, 110))
    {
        while (!st.empty()) //确保开始时，栈已被清空
            st.pop();
        while (!op.empty())
            op.pop();
        
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == ' ') //空格跳过
                continue;
            if(s[i] == '(')
                op.push(s[i]);
            if(s[i] == 'V' || s[i] == 'F')
                st.push(s[i]);
            if(s[i] == '!') //遇到非运算符时，查下一个是否也是非
            {// 不是的话，就要进行反转
                if (s[i+1] == 'F' || s[i+1] == 'V')
                {
                    st.push(fun_not(s[i+1]));
                    i++;
                }
                else
                    op.push(s[i]);
            }
            if(s[i] == '|' || s[i] == '&')
            {
                if (!op.empty()) //操作符号非空时
                {
                    char top;
                    top = op.top(); //获取栈顶操作符
                    if (top == '!') //先算非
                    {
                        char a;
                        while (top == '!')
                        {
                            a = st.top();
                            st.top();
                            st.push(fun_not(a));
                            op.pop(); //算完非后，就丢弃
                            if (!op.empty())
                                a = op.top();
                            else
                                a = 'F';
                        }
                    }

                    if (top == '|') //是或时
                    {
                        char a, b;
                        b = st.top();
                        st.pop();
                        a = st.top();
                        st.pop();
                        st.push(cmp_or(a, b));
                        op.pop(); //算完或后，就丢弃
                        op.push(s[i]);
                    }

                    if (top == '&') //是与时
                    {
                        char a, b;
                        b = st.top();
                        st.pop();
                        a = st.top();
                        st.pop();
                        st.push(cmp_and(a, b));
                        op.pop(); //算完与后，就丢弃
                        op.push(s[i]);
                    }

                    if (top == '(') //如果是左括号，就啥都不干
                        op.push(s[i]);
                    
                }
                if (op.empty())
                    op.push(s[i]);
            }

                if (s[i] == ')' && !op.empty()) //当是右括号，且操作栈内非空时
                {
                    char ch;
                    ch = op.top();
                    while (ch != '(' && !op.empty())//e不是左括号且操作栈内非空时
                    {
                        char top;
                        top = op.top();
                        if (top == '|')
                        {
                            char a, b;
                            b = st.top();
                            st.pop();
                            a = st.top();
                            st.pop();
                            st.push(cmp_or(a, b));
                            op.pop(); //算完或后，就丢弃
                        }
                        if (top == '&')
                        {
                            char a, b;
                            b = st.top();
                            st.pop();
                            a = st.top();
                            st.pop();
                            st.push(cmp_and(a, b));
                            op.pop(); //算完和后，就丢弃
                        }
                        if (top == '!')
                        {
                            char a;
                            a = st.top();
                            st.pop();
                            st.push(fun_not(a));
                            op.pop(); //算完非后，就丢弃
                        }
                        ch = op.top();
                    }
                    // 做完while循环后，操作栈内只剩下左括号，直接丢弃即可
                    op.pop();
                }
            while (!op.empty()) // 防止有剩余的未处理
            {
                char top;
                top = op.top();
                if (top == '|')
                {
                    char a, b;
                    b = st.top();
                    st.pop();
                    a = st.top();
                    st.pop();
                    st.push(cmp_or(a, b));
                    op.pop(); //算完或后，就丢弃
                }
                if (top == '&')
                {
                    char a, b;
                    b = st.top();
                    st.pop();
                    a = st.top();
                    st.pop();
                    st.push(cmp_and(a, b));
                    op.pop(); //算完和后，就丢弃
                }
                if (top == '!')
                {
                    char a;
                    a = st.top();
                    st.pop();
                    st.push(fun_not(a));
                    op.pop(); //算完非后，就丢弃
                }
                top = op.top();
            }
        
            
        }
        ans = st.top();
        st.pop();
        cout << "Expression " << count << ": " << ans << endl;
        
        count++;
    }
    
    system("pause");
    return 0;
}