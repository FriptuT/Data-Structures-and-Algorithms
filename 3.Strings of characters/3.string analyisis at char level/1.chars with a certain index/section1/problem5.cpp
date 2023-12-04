// verify if it ends in digit
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout<<"s: ";cin.getline(s,100);
    L = strlen(s);

    if (isdigit(s[L-1]))
    {
        cout<<"ends in digit";
    }
    else
    {
        cout<<"doesn't end in digit";
    }


    return 0;
}