// print the common suffixes , reversed
#include <iostream>
#include <cstring>
using namespace std;

char s[100],s2[100];
int L1,L2,i,j;

int main()
{
    cout<<"s:";cin.getline(s,100);
    cout<<"s2:";cin.getline(s2,100);

    L1 = strlen(s);
    L2 = strlen(s2);

    // teodor
    //    dor
    i = L1-1;
    j = L2-1;
    while (i >= 0 && j >= 0 && s[i] == s2[j])
    {
        i--;
        j--;
    }
    
    for (int k = i+1; k <= L1-1; k++)
    {
        for (int t = L1-1; t >= k; t--)
        {
            cout<<s[t];
        }
        cout<<endl;
    }
    
    

    return 0;
}