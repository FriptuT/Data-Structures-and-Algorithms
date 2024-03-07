#include <iostream>
#include <fstream>
using namespace std;

int n,x;

int main()
{
    int max1 = 0, max2 = 0;
    while (true)
    {
        cin>>x;
        if (x == 0)
        {
            break;
        }

        if (x > max1)
        {
            max2 = max1;
            max1 = x;
        }
        else if (x > max2 && x != max1)
        {
            max2 = x;
        }
        
        
        
    }
    
    cout<<max1*max2;
    




    return 0;
}