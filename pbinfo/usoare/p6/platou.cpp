/*
    Se consideră un șir de cifre.
    Să se determine lungimea maximală a unei secvențe din șir formată din cifre egale.
*/
#include <iostream>
using namespace std;

int n, x[100], i, cifMin, lungimeCurenta, lungimeMaxima;

int main()
{
    lungimeCurenta = 1;
    lungimeMaxima = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    // 3 8 8 8 8 9 9 9 2 5 5 5 5 7 6 6 6 6 8 8

    cifMin = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (x[i] == x[i - 1])
        {
            lungimeCurenta++;
            if (lungimeCurenta > lungimeMaxima)
            {
                lungimeMaxima = lungimeCurenta;
            }

            if (x[i] < cifMin)
            {
                cifMin = x[i];
            }
        }
        else
        {
            lungimeCurenta = 1;
        }
    }
    cout<<"Lungimea maximala este : "<<lungimeMaxima<<endl;
    cout<<"Cifra cea mai mica cu lungimea maximala este : "<<cifMin<<endl;

    return 0;
}