// verify if contains maximum 4 chars
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{   
    cout<<"s=";cin.getline(s,100);
    L = strlen(s);

    if (L <= 4)
    {
        cout<<"contains max 4 characters max";
    }
    else
    {
        cout<<"contains more than 4";
    }
    

    return 0;
}