// the succesion represents '98' sequence
#include <iostream>
#include "string.h"
using namespace std;

char c1,c2;

int main()
{
    cin>>c1;
    cin>>c2;

    if (c1 == '9' && c2 == '8')
    {
        cout<<c1<<c2<<endl;
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }


    return 0;
}