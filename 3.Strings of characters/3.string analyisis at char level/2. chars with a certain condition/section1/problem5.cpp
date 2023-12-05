// display chars until first vowel exclusive
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout<<"s: ";cin.getline(s,100);
    L = strlen(s);

    for (int i = 0; i <= L-1; i++)
    {
        if (!strchr("aeiouAEIOU",s[i]))
        {
            cout<<s[i];
        }
        else
        {
            break;
        }
        
    }
    


    return 0;
}