#include <iostream>
using namespace std;


int n,x[100];

int main()
{
    cout<<"Introduceti numarul de elemente din sir:";cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }

    int numereRelative = 1; //primul numar este minim-relativ
    int minimCurent = x[0];
    int sumaMaxima = 0;
    int sumaCurenta = x[0];

    // 3 5 9 2 7 11 3 4 2
    for (int i = 1; i < n; i++)
    {
        if (x[i] <= minimCurent)
        {
            minimCurent = x[i];
            numereRelative++;
            sumaCurenta += x[i];
            if (sumaCurenta > sumaMaxima)
            {
                sumaMaxima = sumaCurenta;
            }
            sumaCurenta = minimCurent;
        }
        else
        {
            sumaCurenta += x[i];
            if (sumaCurenta > sumaMaxima)
            {
                sumaMaxima = sumaCurenta;
            }
            
        }
        
    }
    
    cout<<numereRelative<<endl;
    cout<<"Suma maxima e secventei este: "<<sumaMaxima<<endl;




    return 0;
}