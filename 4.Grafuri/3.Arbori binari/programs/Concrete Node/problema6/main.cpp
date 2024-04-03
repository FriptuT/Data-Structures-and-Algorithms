// DA daca nodul este frunza, NU in caz contrar
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, nod, parinte, st[100], dr[100], info[100];

void display(int rad, int nod)
{
    if (rad == 0)
        return;

    if (rad == nod)
    {
        if (st[rad] == 0 && dr[rad] == 0)
        {
            cout << "DA";
        }
        else
        {
            cout << "NU";
        }
    }
    else
    {
        if (st[rad] != 0)
        {
            display(st[rad], nod);
        }
        if (dr[rad] != 0)
        {
            display(dr[rad], nod);
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

    display(rad, nod);

    return 0;
}