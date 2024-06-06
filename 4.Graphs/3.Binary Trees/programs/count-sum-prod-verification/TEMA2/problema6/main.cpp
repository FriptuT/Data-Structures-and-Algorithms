// calculeaza PROD informatiilor de pe nivelul p
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, st[100], dr[100], info[100], i, p, nivel, Pr;

void suma(int rad, int p, int nivel, int &Pr)
{
    if (p == nivel)
    {
        Pr *= info[rad];
    }

    if (st[rad] != 0)
    {
        suma(st[rad], p, nivel + 1, Pr);
    }

    if (dr[rad] != 0)
    {
        suma(dr[rad], p, nivel + 1, Pr);
    }
}

int main()
{
    ifstream inFile("input.txt");
    inFile >> n >> rad >> p;
    for (int i = 1; i <= n; i++)
    {
        inFile >> st[i] >> dr[i] >> info[i];
    }
    inFile.close();

    Pr = 1;
    nivel = 0;
    suma(rad,p, nivel, Pr);

    cout << Pr;

    return 0;
}