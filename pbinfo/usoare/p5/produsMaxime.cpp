/*
    Se citesc de la tastatură numere naturale până la apariția lui zero.
    Să se determine cea mai mare valoare care poate obține înmulțind doua valori diferite dintre cele citite.
*/

#include <iostream>
using namespace std;

void produsMaximTreiValori(){
    int max1,max2,max3, x,Pr;
    max1 = 0;
    max2 = 0;
    max3 = 0;

    while (x != 0)
    {
        cout << "x=";
        cin >> x;


       if (x > max1)
       {
            max3 = max2;
            max2 = max1;
            max1 = x;
       }
       else if(x > max2 && x != max1 && x != max3)
       {
            max2 = x;
       }
       else if(x > max3 && x != max1 && x != max2)
       {
            max3 = x;
       }

       
    }

    Pr = 1;
    Pr *= (max1 * max2 * max3);
    cout << Pr << " este valoarea cea mai mare care se poate obtine";
}

void produsMaximDouaValori(){
    int max1,max2, x,Pr;
    max1 = 0;
    max2 = 0;

    while (x != 0)
    {
        cout << "x=";
        cin >> x;


       if (x > max1)
       {
            max2 = max1;
            max1 = x;
       }
       else if(x > max2 && x != max1)
       {
            max2 = x;
       }

    }

    Pr = 1;
    Pr *= (max1 * max2);
    cout << Pr << " este valoarea cea mai mare care se poate obtine";
}

int main()
{
    produsMaximDouaValori();

    cout<<endl;
    
    produsMaximTreiValori();

    return 0;
}