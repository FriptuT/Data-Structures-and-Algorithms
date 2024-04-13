/*
Plata unei sume de bani

    Fie S o suma de bani. Cunoscand valorile a n monede, sa se determine numarul minim de
    monede folosite pentru a achita suma S.
*/
#include <iostream>
using namespace std;

int n, x[100], aux, suma, rezultat[100], z;

int main()
{
    cout << "n=";
    cin >> n;
    cout << "suma de platit = ";
    cin >> suma;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i]; // moneda
    }
    cout << endl;


    //parcurgem monedele
    int z = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (suma >= x[i])
        {
            suma = suma - x[i];
            rezultat[z++] = x[i];
        }
    }

    // afisare rezultat
    int countMonede = 0;
    for (int i = 0; i < z; i++)
    {
        countMonede++;
        cout << rezultat[i] << " ";
    }

    cout << endl;
    cout << countMonede;

    return 0;
}