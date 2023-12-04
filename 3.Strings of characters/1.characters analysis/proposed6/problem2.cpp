// print 0*1*...*8*9

#include "iostream"
#include "string.h"
using namespace std;

int main()
{

    for (char i = '0'; i <= '9'; i++)
    {
        cout<<i;

        if (i != '9')
        {
            cout<<"*";
        }
    }
    
    return 0;
}