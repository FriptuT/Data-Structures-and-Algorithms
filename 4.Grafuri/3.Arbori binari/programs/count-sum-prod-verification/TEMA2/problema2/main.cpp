// suma inform din frunze
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, st[100], dr[100], info[100], i,S;

void suma(int rad, int &S)
{
    if (st[rad] == 0 && dr[rad] == 0)
    {
        S += info[rad];
    }

    if (st[rad] != 0)
    {
        suma(st[rad], S);
    }

    if (dr[rad] != 0)
    {
        suma(dr[rad], S);
    }
}

int main()
{
    ifstream inFile("input.txt");
    inFile >> n >> rad;
    for (int i = 1; i <= n; i++)
    {
        inFile >> st[i] >> dr[i] >> info[i];
    }
    inFile.close();

    S = 0;
    suma(rad,S);

    cout<<S;

    return 0;
}