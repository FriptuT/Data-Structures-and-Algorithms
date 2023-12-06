// verify if string is composed only by lower letters CONSEQUENTIAL, in ascending order
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L,ok,nr;

int main()
{
    cout<<"s:";cin.getline(s,100);
    L=strlen(s);

    ok = 1;
    for (int i = 0; i <= L-2; i++)
    {
        if ( !(islower(s[i]) && (s[i+1] == s[i] + 1) && (s[i] < s[i+1]) ) )
        {
           ok = 0;
        }
    }

    if (ok == 1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    

    return 0;
}