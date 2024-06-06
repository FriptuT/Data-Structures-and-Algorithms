// sa se citeasca el matricei si sa se afiseze exact ca in schema elem secventei
// specificate
#include <iostream>
#include <stdlib.h>
using namespace std;

int a[100][100], n, i, j;
int main()
{
    // cout<<"n=";cin>>n;
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;

    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }


    for (int i = 2; i <= 7; i++)
    {
        for (int j = 1; j <= i-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}