// transformati din baza "2" in baza "8":

// transformam din baza "2" in baza "10"
// si din baza 10 in baza 8
#include <iostream>
using namespace std;

// NUMAR
int N, b, Pb, NR10, rest;
int main()
{
    cout << "Introduceti baza:";
    cin >> b;
    cout << "Reprezinta numarul in baza " << b << endl;
    cout << "Numar= ";
    cin >> N;

    NR10 = 0;
    Pb = 1;
    while (N != 0)
    {
        NR10 = NR10 + (N % 10) * Pb;
        Pb = Pb * b;
        N /= 10;
    }

    cout << "NR10 =" << NR10 << endl;

    // transformam NR10 in baza 8
    int N8 = 0;
    int P10 = 1;
    while (NR10 != 0)
    {
        rest = NR10 % 8;
        N8 = N8 + rest * P10;
        P10 = P10 * 10;
        NR10 = NR10 / 8;
    }

    cout << "Nr in baza 8 este: " << N8 << endl;

    return 0;
}