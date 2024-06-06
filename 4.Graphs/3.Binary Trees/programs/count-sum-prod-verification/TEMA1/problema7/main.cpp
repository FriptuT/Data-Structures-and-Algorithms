// nr nodurilor de pe nivelul "p"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int n, rad, i, st[100], dr[100], nivel, inaltime, info[100],NR,p;

void A(int rad, int p, int nivel, int &NR)
{
    if (nivel == p)
    {
        NR++;
    }

    if (st[rad] != 0)
    {
        A(st[rad], p, nivel + 1,NR);
    }
    if (dr[rad] != 0)
    {
        A(dr[rad], p, nivel + 1,NR);
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

    nivel = 1;
    NR = 0;
    A(rad, p, nivel, NR);

    cout<<"NR="<<NR;

    return 0;
}