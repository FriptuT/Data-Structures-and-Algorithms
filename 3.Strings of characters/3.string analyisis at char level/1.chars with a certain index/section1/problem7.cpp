// first 2 characters are consecutive digits
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout<<"s: ";cin.getline(s,100);
    L = strlen(s);

    if (L >= 2)
    {
        if(isdigit(s[0]) && isdigit(s[1]) && (s[0] = s[0] + 1)){
            cout<<"consecutive digits - TRUE";
        }
        else
        {
            cout<<"consecutive digits - FALSE";
        }
    }
    



    return 0;
}