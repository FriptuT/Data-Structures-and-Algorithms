/*
   1.a. Să se scrie un program care citește un șir de n numere naturale
    şi determină numărul din șir care are prima cifră minimă.

   1.b.
    Dacă există mai multe numere cu prima cifră minimă, 
    se va determina cel mai mare dintre acestea.
*/

#include <iostream>
#include <limits.h>
using namespace std;

int n, x, cif, cifMin, el, maxNr, numere[25], z, el2;

int main()
{
    cifMin = INT_MAX;
    cout << "n=";
    cin >> n;
    maxNr = -1;
    for (int i = 1; i <= n; i++)
    {

        cout << "x=";
        cin >> x;
        el = x;
        while (el > 10)
        {
            el = el / 10;
        }

        if (el < cifMin)
        {
            cifMin = el;
            maxNr = x;
        }

        if (el == cifMin && x > maxNr)
        {
            maxNr = x;
        }
        
    }

    cout << "Prima cifra minima: " << cifMin << endl;
    cout << "Maximul dintre numerele cu prima cifra minima egala: " << maxNr << endl;

    return 0;
}