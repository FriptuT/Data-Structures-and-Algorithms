// print the common prefixes ,reversed
#include <iostream>
#include <cstring>
using namespace std;

char s[100],s2[100];
int L1,L2;


int main()
{
    cout<<"s:";cin.getline(s,100);
    cout<<"s2:";cin.getline(s2,100);

    L1=strlen(s);
    L2=strlen(s2);


    // teodor
    // teo
    int i = 0;
    while (i <= L1-1 && i <= L2-2 && s[i] == s2[i])
    {
        i++;
    }
    
    for (int j = 0; j <= i; j++)
    {
        for (int k = j; k <= L2-1; k++)
        {
            cout<<s[k]<<" ";
        }
        cout<<endl;
    }
    


    return 0;
}