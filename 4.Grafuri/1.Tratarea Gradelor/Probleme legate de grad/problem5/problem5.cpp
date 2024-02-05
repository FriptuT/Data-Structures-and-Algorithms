// verifica daca contine varfuri izolate  , gr = 0;
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100],n,i,j,x,m,y;

int grad(int x)
{
    int s,j;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += a[x][j];
    }
    return s;
}

int main()
{
    // ifstream inFile("input.txt");
    cout<<"Se citeste graful:" <<endl;
    cout<<"n=";cin>>n;  // nr de noduri
    cout<<"m=";cin>>m;  // nr de muchii

    for (int i = 1; i <= m; i++)
    {
        cout<<"m"<<i<<endl;
        cout<<"x=";cin>>x;
        cout<<"y=";cin>>y;
        a[x][y] = a[y][x] = 1;
    }
    

// verifica daca contine varfuri izolate 
    int ok = 0;
    for (int i = 1; i <= n; i++)
    {
        if (grad(i) == 0)
        {
            ok = 1;
        }
    }

    if (ok == 1)
    {
        cout<<"Contine vf izolate";
    }
    else
    {
        cout<<"Nu contine vf izolate";
    }
    
    



    return 0;
}