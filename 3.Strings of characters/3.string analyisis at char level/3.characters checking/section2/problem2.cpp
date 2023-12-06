// verify if "s" is constant ( all chars are equal )
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L,ok;

int main()
{
    cout<<"s:";cin.getline(s,100);
    L=strlen(s);

    ok = 1;
    for (int i = 0; i <= L-2; i++)
    {
        if (!(s[i] == s[i+1]))
        {
            ok = 0;
        }
    }
    
    if (ok == 1)
    {
        cout<<"constant string";
    }
    else
    {
        cout<<"variable string";
    }
    


    
    return 0;
}