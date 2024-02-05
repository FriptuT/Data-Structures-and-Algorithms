// verf daca are toate vf izolate
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
    
// verf daca are toate vf izolate
    int ok = 1;                         // pp ca are toate vf izolate
    for (int i = 1; i <= n; i++)
    {
        grad(i,gr);
        if (gr != 0)
        {
            ok = 0;
        }
    }

    if (ok == 1)
    {
        cout<<"Are toate vf izolate";
    }
    else
    {
        cout<<"Nu are toate vf izolate";
    }
    


    return 0;
}