/*
Se consideră un şir format din n numere naturale nenule.
Să se determine lungimea maximă a unei secvenţe strict crescătoare din şirul dat.
*/
#include <iostream>
using namespace std;

int n, x[100];

int main()
{
    cout << "n=";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int lungimeCurenta = 1;
    int lungimeMaxima = 1;
    for (int i = 1; i < n; i++)
    {
        if (x[i] > x[i - 1])
        {
            lungimeCurenta++;
            if (lungimeCurenta > lungimeMaxima)
            {
                lungimeMaxima = lungimeCurenta;
            }
        }
        else
        {
            lungimeCurenta = 1;
        }
    }
    cout << "lungime max: " << lungimeMaxima << endl;

    
    

    return 0;
}