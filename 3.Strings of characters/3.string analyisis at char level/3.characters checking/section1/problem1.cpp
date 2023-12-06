// read a string "s" and verify if it contains lowercase vowels
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout<<"s: ";cin.getline(s,100);
    L = strlen(s);

    int  ok = 0;
    for (int i = 0; i <= L-1; i++)
    {
        if (strchr("aeiou",s[i]))
        {
            ok = 1;
        }
    }
    



    return 0;
}