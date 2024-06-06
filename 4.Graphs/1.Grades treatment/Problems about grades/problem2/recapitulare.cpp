#include <iostream>
using namespace std;
int a[100][100],i,j,m,x,y,gr,n;


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
    cout<<"Se citeste graful: "<<endl;
    cout<<"n=";cin>>n; // nr de noduri
    cout<<"m=";cin>>m; // nr de muchii

    for(int i = 1; i <= m; i++){
        cout<<"m"<<i<<endl;
        cout<<"x=";cin>>x;
        cout<<"y=";cin>>y;
        a[x][y] = a[y][x] = 1;
    }

    for (int i = 1; i <= n; i++)
    {   
        grad(i,gr);
        if (gr % 2 == 0)
        {
            cout<<i<<" ";
        }
    }
    

    return 0;
}