// verifica daca contine noduri cu informatii impare
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, st[100], dr[100], OK, p;
string info[100];

void contineInfo(int rad, int p, int nivel, int &OK)
{
    if (p == nivel)
    {
        if (info[rad] != "val")
        {
            OK = 0;
        }
    }

    if (st[rad] != 0)
    {
        contineInfo(st[rad], p, nivel + 1, OK);
    }

    if (dr[rad] != 0)
    {
        contineInfo(dr[rad], p, nivel + 1, OK);
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

    OK = 1;
    int nivel = 0;
    contineInfo(rad,p,nivel, OK);

    if (OK == 1)
    {
        cout << "Contine noduri cu info 'val' pe nivelul " << p;
    }
    else
    {
        cout << "Nu contine noduri cu info pare pe nivelul "<< p;
    }

    return 0;
}