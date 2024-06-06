/*
    Se dă un şir cu n elemente, numere reale, numerotate de la 1 la n. 
    Determinaţi numărul de ordine al primei şi al ultimei apariţii a valorii maxime din şir.
*/

#include <iostream>
#include <limits.h>
using namespace std;

int n, i, t, j;
float x[100], z[100];
int main()
{
    cout << "n=";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }

    //logica
    int primaPoz = -1;
    int ultimaPoz = -1;

    float maxim = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (x[i] > maxim)
        {
            maxim = x[i];
            primaPoz = i;
            ultimaPoz = i;
        }

        if (x[i] == maxim)
        {
            ultimaPoz = i;
        }
        
    }

    if (primaPoz != -1 && ultimaPoz != -1)
    {
        cout<<primaPoz<<" "<<ultimaPoz;
    }
   

    return 0;
}