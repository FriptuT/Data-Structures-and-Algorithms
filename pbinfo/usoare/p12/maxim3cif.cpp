/*
Dat numărul natural n, să se determine cel mai mare număr de trei 
cifre conținut în n.
*/
#include <iostream>
#include <limits.h>
using namespace std;

int x,el,cif,maxim;
long long n;

int main()
{
    cout<<"n=";cin>>n;
    
    maxim = -1;
    while (n > 0)
    {
        int ultTreiCif = n % 1000;
        if (ultTreiCif > maxim)
        {
            maxim = ultTreiCif;
        }
        n = n / 10;
    }

    cout<<"Maximul este:"<<maxim;


    return 0;
}