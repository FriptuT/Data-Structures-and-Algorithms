// consideram sirul X
// afisati secventa de numere aflate pe pozitii consecutive in sirul X
// cu suma maxima
// daca sunt mai multe secvente afisati-le pe toate
#include <iostream>
using namespace std;

void gasesteSumaMaximaSubsiruri(int x[], int n){
    int sumaMaxima = INT_MIN;
    int sumaCurenta;

    for (int i = 1; i < n; i++)
    {
        sumaCurenta = 0;
        for (int j = i; j < n; j++)
        {
            sumaCurenta += x[j];
            if (sumaCurenta > sumaMaxima)
            {
                sumaMaxima = sumaCurenta;
            }
        }
    }

    cout<<"Suma maxima este: "<<sumaMaxima;
    cout<<"Secventa este: "<<endl;

    for (int i = 0; i < n; i++)
    {
        sumaCurenta = 0;
        for (int j = i; j < n; j++)
        {
            sumaCurenta += x[j];
            if (sumaCurenta == sumaMaxima)
            {
                cout<<"secventa este de la pozitia "<<i<<" la "<<"pozitia "<<j;
                for (int t = i; t <= j; t++)
                {
                    cout<<x[t]<<" ";
                }
            }
        }
    }
}

int main()
{
    int n,x[100];
    cout<<"n=";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"x=";cin>>x[i];
    }

    gasesteSumaMaximaSubsiruri(x,n);



    return 0;
}