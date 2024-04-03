/*
    Se consideră un şir format din n numere întregi. 
    Șirul conține cel puțin un număr pozitiv. 
    Să se determine lungimea maximă a unei secvenţe din şir care are proprietatea că este formată doar din valori strict pozitive.
*/
#include <iostream>
#include <limits.h>
using namespace std;

int x[100],n,i,lungimeCurenta, lungimeMaxima;
int main()
{
    lungimeCurenta = 0;
    lungimeMaxima = 0;
    cout<<"n=";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>x[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (x[i] > 0)
        {
            lungimeCurenta++;
            if (lungimeCurenta > lungimeMaxima)
            {
                lungimeMaxima = lungimeCurenta;
            }
        }
        else
        {
            lungimeCurenta = 0;
        }
    }
    
    cout<<"Lungimea maxima > 0: " <<lungimeMaxima;



    return 0;
}