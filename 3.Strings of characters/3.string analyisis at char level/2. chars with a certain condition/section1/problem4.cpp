// blueprint: s="abcd" -> display : a+b+c+d
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout<<"s:";cin.getline(s,100);
    L=strlen(s);

    for (int i = 0; i <= L-1; i++)
    {
        if (s[i] != s[L-1])
        {
            cout<<s[i]<<"+";
        }
        else
        {
            cout<<s[i];
        }
    }
    


    return 0;
}