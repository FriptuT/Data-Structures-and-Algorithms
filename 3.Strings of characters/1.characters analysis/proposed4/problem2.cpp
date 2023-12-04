// consider it is a digit, if it is unnull , transform it in the precedent digit
// else transform it in '9'
#include "iostream"
#include "string.h"
using namespace std;

char c;

int main()
{
    cout<<"c=";cin>>c;

    if (isdigit(c) && c != 0)
    {
        c = c - 1;
    }
    else
    {
        c = '9';
    }
    cout<<c;

    return 0;
}