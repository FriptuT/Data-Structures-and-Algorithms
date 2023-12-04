// c is lower
#include <iostream>
#include <string.h>
using namespace std;

char c;

int main()
{
    cin>>c;

    if (c >= 'a' && c <= 'z')    // or islower(c)
    {                            // or isupper(c) == litera mare
        cout<<"Yes";             // or c >= 'A' && c <= 'Z' == litera mare
    }
    else
    {
        cout<<"Nu";
    }



    return 0;
}   