// print big letters, 3 on a line
#include <iostream>
#include "string.h"
using namespace std;

int main()
{
    int nr=0;

    for (char i = 'A'; i <= 'Z'; i++)
    {
        cout<<i;
        nr++;
        if (nr % 3 == 0)
        {
            cout<<endl;
        }
        
    }
    
    return 0;
}