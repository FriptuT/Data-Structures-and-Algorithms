/*
Se dau n numere naturale. 
Determinaţi câte dintre ele au cifra maximă un număr impar.
*/
#include <iostream>
using namespace std;

int n, x, el, cifMaxima,count,cifraCurenta;

int main()
{
    cout << "n=";
    cin >> n;
    count = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << "numar = ";
        cin >> x;

        el = x;
        while (el != 0)
        {
            cifraCurenta = el % 10;
            if (cifraCurenta > cifMaxima)
            {
                cifMaxima = cifraCurenta;
            }
            el = el / 10;
        }

        if (cifMaxima % 2 == 1)
        {
            count++;
        }
    }

        cout<<"Cate dintre numere au cifra maxima un nr impar:"<<count;
    return 0;
}