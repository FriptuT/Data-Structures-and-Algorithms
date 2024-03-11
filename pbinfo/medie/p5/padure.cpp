/*
Se consideră o pădure ce conține n•m copaci aranjați pe n linii și m coloane 
în care s-a produs un incendiu. 
Pădurarii cunosc coordonatele x și y ale copacului de la care a izbucnit focul 
și modalitatea prin care acesta se extinde. 
Astfel, dacă un copac se aprinde într-o anumită zi, 
în ziua următoare se vor aprind copacii vecini cu acesta 
pe linie sau coloană care nu sunt încă afectați de incendiu
*/
#include <iostream>
using namespace std;

int n, m, x, y, a[100][100],distanta;

int main()
{
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;

    a[100][100] = {0};

    a[x][y] = 1;

    // logica   
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 0)
            {
                distanta = max(abs(x-i), abs(y-j));
                a[i][j] = distanta + 1;
            }
        }
    }

    

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}