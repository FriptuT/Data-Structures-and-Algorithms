#include <iostream>
#include <fstream>
using namespace std;
int n, numar, i, j, x, y, m, c;

int main()
{
    ifstream inFile("input.txt");
    ofstream outFile("triunghiOut.txt");

    cout << "y=";
    cin >> y;
    inFile >> c;
    
    if (c == 1)
    {
        inFile >> n; // numarul liniei pe care trebuie sa se calc suma

        int numar = 1;
        int suma = 0;
        for (int l = 1; l <= y; l++)
        {
            for (int j = 1; j <= l; j++)
            {
                if (n == l)
                {
                    cout << numar << " ";
                    suma += numar;
                }
                numar++;
            }
            cout << endl;
        }

        outFile << suma << endl;
    }

    if (c == 2)
    {
        inFile >> m; // numarul care trebuie cautat in triunghi

        int numar = 1;
        for (int l = 1; l <= y; l++)
        {
            for (int j = 1; j <= l; j++)
            {
                if (numar == m)
                {
                    outFile<<"linia: "<<l<<" ";
                    outFile <<"pozitia pe linie: "<<j<<" ";
                }
                numar++;
            }
            cout << endl;
        }
    }


    return 0;
}