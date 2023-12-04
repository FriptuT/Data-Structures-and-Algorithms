// create a program that reads from keyboard variable c of type char and:
// consider that it is a lower, transform it in next letter if it isn't the last letter
// else transform it in string terminator ( '0' )
#include <iostream>
#include "string.h"
using namespace std;

char c;

int main()
{
    cin>>c;
    

    if (c != 'z')
    {
        c = c + 1;
    }
    else
    {
        c = '0';
    }

    cout<<c;

    return 0;
}