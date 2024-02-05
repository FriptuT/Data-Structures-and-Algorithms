// *Verifica daca graful B este graf partial al grafului A
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100], n, i, j,m,b[100][100];
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

    inFile >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            inFile >> b[i][j];
        }
    }

    for (int j = 1; j <= n; j++)
    {
        if (a[1][j] == 1)
        {
            b[1][j] = 0;
            b[j][1] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    int ok = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] != b[i][j])
            {
                ok = 1;
            }
        }
    }
    
    if (ok == 1)
    {
        cout<<"B este graf partial al grafului A";
    }
    else
    {
        cout<<"B nu este graf partial al grafului A";
    }

    return 0;
}