//afiseaza vecinii nodului p
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100], n, i, j, nod, vecini[100], v;

int grad(int x)
{
    int s = 0;
    for (int j = 1; j <= n; j++)
    {
        s += a[x][j];
    }
    return s;
}

int main()
{
    ifstream inFile("input.txt");

    inFile >> n;
    inFile >> nod;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            inFile >> a[i][j];
        }
    }

    int v = 0;
    for (int j = 1; j <= n; j++)
    {
        if (a[nod][j] == 1)
        {
            vecini[v++] = j;
        }
    }

    cout<<"Vecinii nodului "<<v<<"::: ";
    for (int i = 0; i < v; i++)
    {
        cout << vecini[i] << " ";
    }

    return 0;
}