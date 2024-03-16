/*
    Se consideră un șir de cifre.
    Să se determine lungimea maximală a unei secvențe din șir formată din cifre egale.
*/
#include <iostream>
using namespace std;

int n, x[100], i, cifMin, lungimeCurenta, lungimeMaxima;

int main()
{
    cout<<"n=";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"cifra= ";cin>>x[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == x[i-1])
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
            lungimeCurenta = 1;             // daca secventa de cifre egale s-a terminat , resetam lungimea curenta
                                            // pastrand lungimea maxima intr-o variabila, urmand sa vedem daca mai este alta secv mai mare
        }
        
    }
    



    cout<<"Lungimea maximala este : "<<lungimeMaxima<<endl;
    cout<<"Cifra cea mai mica cu lungimea maximala este : "<<cifMin<<endl;

    return 0;
}