// informatiile pare de pe nivelul p
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, p, nivel, st[100], dr[100], info[100];

void afiseazaInformatii(int rad, int p, int nivel)
{
    if (p == nivel)
    {
        if (info[rad] % 2 == 0)
        {
            cout<<info[rad]<<" ";
        }
    }
    else
    {
        if (st[rad] != 0)
        {
            afiseazaInformatii(st[rad], p, nivel + 1);
        }
        if (dr[rad] != 0)
        {
            afiseazaInformatii(dr[rad], p, nivel + 1);
        }
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

    nivel = 0; 
    afiseazaInformatii(rad,p,nivel);

    return 0;
}