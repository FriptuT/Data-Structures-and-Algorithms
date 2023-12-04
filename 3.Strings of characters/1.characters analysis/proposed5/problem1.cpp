// create a program that reads from keyboard two variables c1,c2 of type char with
// digits values and build the decimal number formed by those two digits 
#include "iostream"
#include "string.h"
using namespace std;

char c1,c2;
int cif1,cif2,number;

int main()
{
    cin>>c1;
    cin>>c2;

    cif1 = c1 - '0';
    cif2 = c2 - '0';

    number = cif1 *10 + cif2;

    cout<<number;


    return 0;
}