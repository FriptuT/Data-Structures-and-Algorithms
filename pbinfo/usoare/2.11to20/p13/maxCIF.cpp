/*
Să se scrie un program care să determine cea mai mare cifră a unui număr 
natural citit de la tastatură.
*/
#include <iostream>
using namespace std;

int n,el,cif,maxCif;

int main()
{
    cout<<"nr=";cin>>n;

    el = n;
    maxCif = -1;
    while (el != 0)
    {
        cif = el % 10;
        if (cif > maxCif)
        {
            maxCif = cif;
        }
        el /= 10;
    }
    
    cout<<"cifra maxima: "<<maxCif;


    return 0;
}