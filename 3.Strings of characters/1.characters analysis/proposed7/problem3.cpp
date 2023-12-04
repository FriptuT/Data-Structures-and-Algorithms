// read chars c1 and c2 and
// test if al least one of them is in {'a', 'c', 'M', '9'}
#include "iostream"
#include "string.h"
using namespace std;

char c1,c2; 

int main()
{
    cin>>c1;
    cin>>c2;

    if (strchr("acM9",c1) || strchr("acM9",c2))
    {
        cout<<"at least 1 was found";
    }
    else
    {
        cout<<"none of them was found";
    }


    return 0;   
}