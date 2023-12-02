// c is digit
#include <iostream>
#include <string.h>
using namespace std;

char c;

// isdigit(c) OR c >= '0' && c <= '9'

int main()
{
    cin>>c;

    if (isdigit(c))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }



    return 0;
}