// matrix - rectangular and triangular traversal
// page 6
// a)
// de jos in sus SI de la stanga la dreapta
#include <iostream>
#include <stdlib.h>
using namespace std;


int a[100][100],n,i,j;

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;

// de jos in sus SI de la stanga la dreapta

    for (int i = 6; i >= 2; i--)
    {
        for (int j = 2; j <= i; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}   