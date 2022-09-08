/*#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int count, sum;
    char alphabet[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char input[256];
    
    while(cin.getline(input, 256))
    {
        if(input[0] == '#') break;
        count = 0;
        sum = 0;
        for(int i = 0; i < input.size(); i++)
        {
            for(int j = 0; j<28; j++)
            {
                sum += 
            }
        }
    }
}*/
#include <iostream>
using namespace std;
int main()
{
    char s[256];
    int sum, j;
    while(cin.getline(s, 256))
    {
        if(s[0] == '#') break;
        j = sum = 0;
        while(s[j]!='\0')
        {
            if(s[j] != ' ') sum+=(s[j]-'A'+1)*(j+1);
            j++;
        }
        cout << sum << endl;
    }
}