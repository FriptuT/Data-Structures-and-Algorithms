// nivelul pe care se afla nodul "nod";
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, p, nivel, st[100], dr[100], info[100],nod;

void afisareDescendenti(int rad, int nod, int nivel)
{
    if (rad == nod)
    {
        cout<<nivel<<" ";
    }
    else
    {
        if (st[rad] != 0)
        {
            afisareDescendenti(st[rad], nod, nivel + 1);
        }
        if (dr[rad] != 0)
        {
            afisareDescendenti(dr[rad], nod, nivel + 1);
        }
    }
}

int main()
{
    ifstream inFile("input.txt");
    inFile >> n >> rad >> nod;
    for (int i = 1; i <= n; i++)
    {
        inFile >> st[i] >> dr[i] >> info[i];
    }

    inFile.close();

    nivel = 0;
    afisareDescendenti(rad, nod, nivel);

    return 0;
}