// afiseaza nodurile de pe nivelul "p"
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, nivel, p, st[100], dr[100], info[100];

void afiseazaDePeNivele(int rad, int p, int nivel)
{

    if (nivel == p)
    {
        cout << rad << " ";
    }
    else
    {
        if (st[rad] != 0)
        {
            afiseazaDePeNivele(st[rad], p, nivel + 1);
        }
        if (dr[rad] != 0)
        {
            afiseazaDePeNivele(dr[rad], p, nivel + 1);
        }
    }
}

int main()
{
    ifstream inFile("input.txt");
    nivel = 0;
    inFile >> n >> rad >> p;
    for (int i = 1; i <= n; i++)
    {
        inFile >> st[i] >> dr[i] >> info[i];
    }
    inFile.close();

    afiseazaDePeNivele(rad,p,nivel);


    return 0;
}