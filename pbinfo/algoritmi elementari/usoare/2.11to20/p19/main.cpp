//Se dă un șir cu n elemente, numere naturale.
// Să se determine câte elemente ale șirului au număr impar de cifre.
#include <iostream>
#include <fstream>
using namespace std;

int n, x, cif, el;
int main()
{
    cout << "n=";
    cin >> n;
    int elemente = 0;
    // 777
    for (int i = 1; i <= n; i++)
    {
        int cifNr = 0;

        cout << "numar=";
        cin >> x;
        el = x;
        while (el != 0)
        {
            cifNr++;
            el = el / 10;
        }

        if (cifNr % 2 == 1)
        {
            elemente++;
        }
    }

    cout << "In total sunt " << elemente << endl;

    return 0;
}