// build a number like c1c2c2c1  => 2,5 => 2552
#include <iostream>
#include <cstring>
#include "typeinfo"         
using namespace std;

char c1,c2;
int cif1,cif2,number,number2,number3;

int main()
{
    cin>>c1;
    cin>>c2;

    cif1 = c1 - '0';
    cif2 = c2 - '0';

    cout<<typeid(cif2).name()<<endl;

    number = cif1 *10 + cif2;
    number2 = (number * 100)/10 +cif2;
    number3 = (number2 * 1000)/100 + cif1;

    cout<<number3;

    return 0;
}