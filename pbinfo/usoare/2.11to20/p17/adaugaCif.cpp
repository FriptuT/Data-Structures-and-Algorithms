#include <iostream>
using namespace std;


int n,sumaCif,el,cif,cifCurenta, cifMaxima,ultimaCifra;

int main()
{
    cout<<"numar=";cin>>n;

    cifMaxima = -1;

    el = n;                             // copie numar
    sumaCif = 0;                        // sumaCifre
    // ultimaCifra = el % 10;              // ultimaCifra
    // sumaCif = sumaCif  + ultimaCifra;   // adunam ultimaCifra la suma
    while (el != 0)
    {
        // n = 3712531
        // cifCurenta = (el % 10 == ultimaCifra) ? ((el / 10) %10) : (el % 10);
        cifCurenta = el % 10;
        
        if (cifCurenta > cifMaxima)
        {
            sumaCif += cifCurenta;
            cifMaxima = cifCurenta;
        }
        

        el = el / 10;
    }
    

    cout<<"Suma: "<<sumaCif<<endl;


    return 0;
}