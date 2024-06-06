/*
    transformati din baza "M" in baza 10 numarul n
    folosind vector
*/
#include <iostream>
using namespace std;

int n,baza,x[100],i,NR10,PutereBaza;


int main()
{
    cout<<"Baza b = ";cin>>baza;                     
    cout<<"Reprezinta in baza = "<< baza<<endl;      
    cout<<"numarul de cifre=";cin>>n;
    cout<<"Introduceti cifrele: "<<endl;
    for (int i = 1; i <= n; i++)
    {
        cin>>x[i];
    }
    cout<<endl;


    NR10 = 0;
    PutereBaza = 1;
    // 1 0 1
    for (int i = n; i >= 1; i--)
    {
        NR10 = NR10 + x[i] * PutereBaza;
        PutereBaza = PutereBaza * baza;
    }
    
    cout<<"Numarul in baza 10 este: "<<NR10;


    return 0;
}