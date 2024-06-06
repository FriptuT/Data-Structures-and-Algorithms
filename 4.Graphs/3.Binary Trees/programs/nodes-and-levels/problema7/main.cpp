// nivelul pe care se afla tatal nodului "nod";
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, p, nivel, st[100], dr[100], info[100], nod, parinte;

void afisareDescendenti(int rad, int nod, int parinte = -1, int nivel)
{
    if (rad == nod)
    {
        if (parinte == -1)
        {
            cout << "Nodul " << nod << " este radacina si nu are parinte";
        }
        else
        {
            cout<<"Tatal nodului " <<nod<< " este "<<parinte<<endl;
        }
    }
    else
    {
        if (st[rad] != 0)
        {
            afisareDescendenti(st[rad], nod, rad, nivel + 1);
        }
        if (dr[rad] != 0)
        {
            afisareDescendenti(dr[rad], nod, rad, nivel + 1);
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
    afisareDescendenti(rad, nod, parinte, nivel);

    return 0;
}