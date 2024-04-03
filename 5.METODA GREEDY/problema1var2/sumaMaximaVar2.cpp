/*
    Submultimea multimii A a carei suma este maxima
    Elemente intregi nenulem pozitive;
*/
#include <iostream>
using namespace std;

int n, x[100],z[100],m;

int main()
{
    cout<<"n=";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>x[i];
    }
    cout<<endl;

    int S = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x[i] > 0)
        {
            cout<<x[i]<<" ";
            S = S +x[i];
        }
    }
    
    cout<<"Suma este="<<S;


    return 0;
}   