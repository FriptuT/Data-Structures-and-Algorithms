// Afiseaza gradul cel mai mare si toate nodurile care au acel grad
#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;

int a[100][100], n, i, j;

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

    inFile >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            inFile >> a[i][j];
        }
    }

    // Afiseaza gradul cel mai mare si toate nodurile care au acel grad
    int max = 1;
    for (int i = 1; i <= n; i++)
    {
        if (grad(i) > grad(max))
        {
            max = i;
        }
    }
    cout << "Gradul maxim: " << grad(max) << endl;

    cout<<"Nodurile cu grad maxim: "<<endl;
    for (int i = 1; i <= n; i++)
    {
        if (grad(i) == grad(max))
        {
            cout << i << " ";
        }
    }

    return 0;
}