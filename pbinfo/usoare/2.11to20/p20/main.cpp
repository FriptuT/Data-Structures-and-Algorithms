//Se dă un șir cu n elemente, numere naturale. 
//Determinați diferența în valoare absolută dintre 
//numărul de valori pare din șir și numărul de valori impare din șir.
#include <iostream>
using namespace std;

int n, x[100],i;

int main()
{
    cout<<"n=";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"x["<<i<<"]=";cin>>x[i];
    }
    
    int nrPare = 0;
    int nrImpare = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x[i] % 2 == 0)
        {
            nrPare++;
        }
        else
        {
            nrImpare++;
        }
    }

    cout<<"Diferenta in valoare absoluta este:"<<abs(nrPare - nrImpare);
    

    return 0;
}   