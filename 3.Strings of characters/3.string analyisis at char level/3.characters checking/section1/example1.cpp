// verify if it contains at least 3 even digits framed by lowercase vowels
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;


int main()
{
    cout<<"s:";cin.getline(s,100);

    int nr = 0;
    for (int i = 1; i <= L-1; i++)
    {
        if(strchr("02468",s[i]) && strchr("aeiou", s[i-1]) && strchr("aeiou",s[i+1]))
        {
            nr++;
            if (nr >= 3)
            {
                cout<<"yes";
            }
            else
            {
                cout<<"nu";
            }
        }
    }
    
    return 0;
}