/*
Scrieți un program care citește un număr natural nenul n 
și care calculează suma S tuturor numerelor distincte prefixe pentru n.
*/
#include <iostream>
using namespace std;

int n, sumaPrefixe,cif,el;

int main()
{
    cout<<"n=";cin>>n;
    
    el = n;
    sumaPrefixe = 0;
    while (el != 0)
    {
        sumaPrefixe += el;
        el = el / 10;
    }

    cout<<"Suma prefixelor:"<<sumaPrefixe;
    
    


    return 0;
}