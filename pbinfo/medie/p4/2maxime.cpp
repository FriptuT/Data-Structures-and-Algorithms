/*
Să se scrie un program care citește un șir de n numere naturale 
şi determină cele mai mari două numere din şir.
*/
#include <iostream>
#include <limits.h>
using namespace std;

int max1,max2,n,x;
int main()
{
    cout<<"n=";cin>>n;
    max1 = -1;
    max2 = -1;
    for (int i = 1; i <= n; i++)
    {
        cout<<"x=";cin>>x;

        if (x > max1)
        {
            max2 = max1;
            max1 = x;
        }
    }

    cout<<"Cele mai mari 2 numere sunt: "<<max1<<" si "<<max2<<endl;
    

    return 0;
}