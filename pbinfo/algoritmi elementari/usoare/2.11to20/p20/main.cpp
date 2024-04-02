// Se citește un număr natural n.
// Să se determine câte cifre 0 și câte cifre 1 are reprezentarea în baza 2 a acestui număr.
#include <iostream>
#include <fstream>
using namespace std;

/*

while (cat != 0)
    - impartim numarul la “baza” si tinem minte restul
    - memoram fiecare rest rest intr-o variabila ( aceasta var va fi noul numar )
    - numarul se formeaza cu fiecare rest ,inmultit cu puterile lui 10
    - plecam cu 10 la puterea 1
    - dupa fiecare calcularea a restului crestem puterea lui 10 cu 1;
    - apoi impartim catul la “baza” si tinem minte restul
*/

int n, rest, numarBaza10, putere10,nrUnu,nrZero,cif;

int main()
{
    cout<<"n=";cin>>n;
    
    numarBaza10 = 0;
    putere10 = 1;
    while (n != 0)
    {
        rest = n % 2;
        numarBaza10 = rest * putere10 + numarBaza10; 
        putere10 = putere10 * 10;
        n = n / 2;
    }

    cout<<"Numarul este "<<numarBaza10<<endl;

    nrUnu = 0;
    nrZero = 0;
    while (numarBaza10 != 0)
    {
        cif = numarBaza10 % 10;
        if (cif == 1)
        {
            nrUnu++;
        }
        else
        {
            nrZero++;
        }
        numarBaza10 /= 10;
    }
    
    cout<<"cifre 0 = "<<nrZero<<endl;
    cout<<"cifre 1 = "<<nrUnu<<endl;
    

    return 0;
}