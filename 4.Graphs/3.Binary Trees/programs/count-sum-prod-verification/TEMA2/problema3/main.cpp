// calculeaza suma informatiilor de pe nivelul p
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, st[100], dr[100], info[100], i, S,p,nivel;

void suma(int rad, int p, int nivel, int &S)
{
    if (nivel == p)
    {
        S += info[rad];
    }

    if (st[rad] != 0)
    {
        suma(st[rad], p, nivel + 1, S);
    }

    if (dr[rad] != 0)
    {
        suma(dr[rad], p, nivel + 1, S);
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

    S = 0;
    nivel = 0;
    suma(rad,p,nivel, S);

    cout << S;

    return 0;
}