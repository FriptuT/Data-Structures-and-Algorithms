// Să se scrie un program care să determine ultima 
// cifră pară a unui număr natural citit de la tastatură.
#include <iostream>
#include <fstream>
using namespace std;

int n,cif,ultimaPara,el;
int main()
{   
    // 1265 -> 6
    cout<<"n=";cin>>n;
    el = n;
    while (el != 0)
    {
        cif = el % 10;
        if (cif % 2 == 0)
        {
            ultimaPara = cif;
            break;
        }
        el = el / 10;
    }

    cout<<"ultima cifra para este : "<<ultimaPara;


    return 0;
}
