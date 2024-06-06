// * Verifica daca graful este complet folosind gradul 
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100],n,i,j;

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
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            inFile >> a[i][j];
        }
    }

    int ok = 1;     // toate au gradul 2
    for (int i = 1; i <= n; i++)
    {
        if (grad(i) != 2)
        {
            ok = 0;
        }
    }
    
    if (ok == 1)
    {
        cout<<"Este graf complet";
    }
    else
    {
        cout<<"Nu este graf complet";
    }
    

    return 0;
}   