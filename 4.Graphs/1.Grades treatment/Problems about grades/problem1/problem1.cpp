// In aceasta sectiune realizam programe care afiseaza nodurile de grad par 
// din graful de mai jos.
// Introduceti in calculator urmatoarele doua programe.
// Datele de intrare sunt corespunzatoare grafului din imagine
// In primul program , matricea de adiacenta se citeste element cu element, din 
// fisierul A.txt, iar functia "grad" este de tipul int
#include <iostream>
#include <fstream>
using namespace std;


int a[100][100],i,j,n;

int grad(int x){
    int s;
    s = 0;
    for (int j = 1; j <= n; j++)
    {
        s = s + a[x][j];
    }
    
    return s;
}

int main()
{
    ifstream fin("A.txt");

    fin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            fin >> a[i][j];
        }
    }
    fin.close();

    for (int i = 1; i <= n; i++)
    {
        if (grad(i) % 2 == 0)
        {
            cout<<i<<" ";
        }
    }
    


    return 0;
}