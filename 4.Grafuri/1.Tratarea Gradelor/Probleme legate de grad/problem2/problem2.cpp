// in al doilea program matricea de adiacenta se citeste folosind muchiile
// iar functia "grad" este de tipul void
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100],i,n,m,x,y,gr;

void grad(int x, int &gr)
{
    int s;
    s = 0;
    for (int j = 1; j <= n; j++)
    {
        s = s + a[x][j];
    }
    gr = s;
}


int main()
{
    ifstream fin("A.txt");

    fin>>n>>m;
    for (int i = 1; i <= m; i++)
    {
        fin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    fin.close();
    
    for ( i = 1; i <= n; i++)
    {
        grad(i,gr);
        if(gr % 2 == 0)
        {
            cout<<i<<" ";
        }
    }
    



    return 0;
}