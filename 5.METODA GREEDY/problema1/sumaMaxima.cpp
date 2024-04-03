/*
    Fie A o multime cu n elemente, negative si pozitive. Determinati submultimea
    multimii A a carei suma este maxima.
    A = ( 1, 8, -6, 7 ,-5 ,-4, 99)
*/
#include <iostream>
using namespace std;

int x[100], n, z[100], m;

int main()
{
    cout << "n=";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "x[" << i << "]=";
        cin >> x[i];
    }
    cout << endl;

    int S = 0;
    m = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x[i] > 0)
        {
            z[m++] = x[i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        S = S + z[i];
        cout<<z[i]<<" ";
    }

    return 0;
}