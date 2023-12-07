// print the common prefixes
#include <iostream>
#include <cstring>
using namespace std;

char s[100],s2[100];
int L1,L2,i;

int main()
{
    cout<<"s:";cin.getline(s,100);
    cout<<"s2:";cin.getline(s2,100);
    L1=strlen(s);
    L2=strlen(s2);

    i = 0;
    while (i <= L1-1 && i <= L2-1 && s[i] == s2[i])
    {
        i++;
    }

    for (int j = i-1; j >= 0; j--)
    {
        for (int t = 0; t <= j; t++)
        {
            cout<<s[t]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}