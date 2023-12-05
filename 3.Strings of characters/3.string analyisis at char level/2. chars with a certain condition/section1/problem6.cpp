// display chars until first vowel inclusive
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
            cout<<s[i];
            break;
        }
        
    }
    


    return 0;
}