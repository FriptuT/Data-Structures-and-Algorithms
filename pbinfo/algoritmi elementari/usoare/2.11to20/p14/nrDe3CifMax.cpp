/*
Dat numărul natural n, să se determine cel mai mare număr de trei cifre 
conținut în n.
*/
#include <iostream>
using namespace std;

int n, cif,el,maxNr;

int main()
{
    cout<<"nr=";cin>>n;
    
    el = n;
    maxNr = -1;
    while (el != 0)
    {
        int treiCif = el % 1000;
        if (treiCif > maxNr)
        {
            maxNr = treiCif;
        }
        el /= 10;
    }
    
    cout<<"Cel mai mare numar de 3 cifre : "<<maxNr;


    return 0;
}