// Un număr natural se numește număr ADIDAS dacă:

// are exact șase cifre;
// prima cifră, a doua, a treia și ultima sunt diferite două câte două;
// penultima cifră este egală cu prima;
// a patra cifră este egală cu a doua.
// De exemplu, numărul 459540 este număr ADIDAS, iar 459549 nu este număr ADIDAS.

// Se dă un șir cu n numere naturale.
// Să se determine cel mai mare număr ADIDAS din șir.
#include <iostream>
using namespace std;

int n, x, el, cif,ok;

bool isADIDAS(int numar){
    if (numar < 100000 || numar > 999999)
    {
        return false; // numarul nu are 6 cifre
    }

    int sixth = numar % 10;
    numar /= 10;
    int fifth = numar % 10;
    numar /= 10;
    int fourht = numar % 10;
    numar /= 10;
    int third = numar % 10;
    numar /= 10;
    int second = numar % 10;
    numar /= 10;
    int first = numar;
    
    if (first == second && first == third && first == sixth
    && second == third && second == sixth
    && third == sixth)
    {
        return false;
    }

    if (fifth != first)
    {
        return false;
    }

    if (fourht != second)
    {
        return false;
    }
}

// int n, x, el, cif,ok;

int main()
{
    cout<<"n=";cin>>n;
    int maxAdidas = -1;
    for (int i = 1; i <= n; i++)
    {
        cout<<"numar = ";cin>>x;

        if (isADIDAS(x))
        {
            if (x > maxAdidas)
            {
                maxAdidas = x;
            }
        }
    }

    cout<<"Numarul ADIDAS maxim este : "<<maxAdidas;
    

    return 0;
}