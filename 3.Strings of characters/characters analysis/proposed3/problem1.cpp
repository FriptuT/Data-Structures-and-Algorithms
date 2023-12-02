// create a program wich reads from keyboard variable c of type char, and verifies if:
// the ASCII code of variable is even
#include <iostream>
#include <string.h>
using namespace std;

char c;
int code_c;

int main()
{
    cin>>c;
    code_c = c;

    if (code_c % 2 == 0)
    {
        cout<<"it's even";
    }
    else
    {
        cout<<"it's odd";
    }

    return 0;
}