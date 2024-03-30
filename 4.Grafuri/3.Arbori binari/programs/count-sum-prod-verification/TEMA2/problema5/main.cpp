// calculeaza PROD informatiilor pare
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, st[100], dr[100], info[100], i, S,p,nivel,Pr;

void suma(int rad, int &Pr)
{
    if (info[rad] % 2 == 0)
    {
        Pr *= info[rad];
    }

    if (st[rad] != 0)
    {
        suma(st[rad], Pr);
    }

    if (dr[rad] != 0)
    {
        suma(dr[rad], Pr);
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

    Pr = 1;
    suma(rad,Pr);

    cout << Pr;

    return 0;
}