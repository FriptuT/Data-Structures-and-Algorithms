//afiseaza varfurile terminale
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100],i,j,x,n,gr;

void grad(int x, int &gr){
    int s,j;
    s = 0;
    for (int j = 1; j <= n; j++)
    {
        s += a[x][j];
    }
    gr = s;
}

int main()
{
    ifstream inFile("input.txt");
    cout<<"Se citeste graful : "<<endl;

    inFile >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            inFile>>a[i][j];
        }
    }
    
    //afiseaza varfurile terminale

    for (int i = 1; i <= n; i++)
    {
        grad(i,gr);
        if (gr == 1)
        {
            cout<<i<<" ";
        }
        
    }




    return 0;
}