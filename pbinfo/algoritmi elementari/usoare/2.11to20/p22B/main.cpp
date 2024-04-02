/*
    folosind numar
*/
#include <iostream>
using namespace std;

long long N,Nr10,Pb;
int b;

int main()
{
    cout<<"Introduceti baza b = ";cin>>b;
    cout<<"Introduceti reprezentarea in baza "<<b<<endl;
    cout<<"Numarul N = ";cin>>N;

    Nr10 = 0;
    Pb = 1;
    // 1 0 1 0
    while (N != 0)
    {
        Nr10 = Nr10 + (N%10)*Pb;
        Pb = Pb * b;
        N = N / 10;
    }
    
    cout<<"Numarul in baza 10 este : "<<Nr10;



    return 0;
}