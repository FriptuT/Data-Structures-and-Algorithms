// verify if contains at least a digit framed by vowels
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L,ok,nr;

int main()
{
    cout<<"s: ";cin.getline(s,100);
    L=strlen(s);

    ok = 0;
    for (int i = 0; i <= L-1; i++)
    {
        if (isdigit(s[i]) && strchr("aeiouAEIOU",s[i-1]) && strchr("aeiouAEIOU",s[i+1]))
        {
            ok = 1;
        }
    }
    
    if (ok == 1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }


    return 0;
}