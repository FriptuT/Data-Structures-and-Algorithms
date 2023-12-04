// build a number like c1000c2
#include "iostream"
#include "string.h"
using namespace std;

char c1,c2;
int cif1,cif2,number;

int main()
{
    cout<<"c1=";cin>>c1;
    cout<<"c2=";cin>>c2;

    cif1 = c1 - '0';
    cif2 = c2 - '0';

    number = cif1 * 10000 + cif2;
    
    cout<<number;


    return 0;
}