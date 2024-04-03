// Nodurile de pe nivelul "p" care au 2 descendenti directi
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, p, nivel, st[100], dr[100], info[100];

void afisareDescendenti(int rad, int p, int nivel)
{
    if (p == nivel)
    {
        if (st[rad] != 0 && dr[rad] != 0)
        {
            cout<<rad<<" ";
        }
        
    }
    else
    {
        if (st[rad] != 0)
        {
            afisareDescendenti(st[rad], p, nivel + 1);
        }
        if (dr[rad] != 0)
        {
            afisareDescendenti(dr[rad], p, nivel + 1);
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
    afisareDescendenti(rad,p,nivel);



    return 0;
}