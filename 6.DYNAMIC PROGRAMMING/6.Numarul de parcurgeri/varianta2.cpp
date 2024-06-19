#include <iostream>
using namespace std;

int a[99][99],n,i,j;

int main()
{
    cout<<"n=";cin>>n;
    for (int j = 1; j <= n; j++)
    {
        a[1][j] = 1;
    }
    
    for (int i = 2; i <= n; i++)
    {
        a[i][n] = 1;
    }
    
    for (int i = 2; i <= n; i++)
    {
        for (int j = n-1; j >= 1; j--)
        {
            a[i][j] = a[i-1][j] + a[i-1][j-1] + a[i][j+1];
        }
    }
    

    cout<<a[n][1];

    return 0;
}   