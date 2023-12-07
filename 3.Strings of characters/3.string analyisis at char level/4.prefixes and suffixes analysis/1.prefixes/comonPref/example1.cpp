// read 2 strings of char and : 
// print the longest common prefix
#include <iostream>
#include <cstring>
using namespace std;

char s[100],s2[100];
int L1,L2,i,j;

int main()
{
    cout<<"S1:";cin.getline(s,100);
    cout<<"S2:";cin.getline(s2,100);

    L1 = strlen(s);
    L2 = strlen(s2);

    // teodor
    // teo 
    i = 0;
    while (i <= L1-1 && i <= L2-1 && s[i] == s2[i])
    {
        i++;
    }

    for (int j = 0; j <= i-1; j++)
    {
        cout<<s[j];
    }
    

    return 0;
}