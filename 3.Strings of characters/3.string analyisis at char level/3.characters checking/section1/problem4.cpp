// count lowercase vowels succeded by upper vowels
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L,NR;

int main()
{
    cout<<"s:";cin.getline(s,100);
    L=strlen(s);

    NR = 0;
    for (int i = 0; i <= L-1; i++)
    {
        if (strchr("aeiou",s[i]) && strchr("AEIOU",s[i+1]))
        {
            NR++;
        }
    }
    
    cout<<"number of lower vowels:"<<NR;




    return 0;
}