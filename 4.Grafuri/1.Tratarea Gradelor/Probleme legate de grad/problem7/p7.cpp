// Verifica daca nodul v este izolat, terminal sau interior
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100], i, j, n, v;

int grad(int x)
{
    int s;
    s = 0;
    for (int j = 1; j <= n; j++)
    {
        s += a[x][j];
    }
    return s;
}

int main()
{
    ifstream inFile("input.txt");
    cout << "se citeste graful: " << endl;

    inFile >> n;
    inFile >> v;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            inFile >> a[i][j];
        }
    }

    // Verifica daca nodul v este izolat, terminal sau interior

    if (grad(v) == 0)
    {
        cout << "nod izolat";
    }
    else if (grad(v) == 1)
    {
        cout << "nod terminal";
    }
    else if (grad(v) >= 2)
    {
        cout << "nod interior";
    }

    return 0;
}