// afiseaza varfurile izolate
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100],n,i,j,x;

int grad(int x){
    int s,j;
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
    cout<<"Se citeste graful: "<<endl;

    inFile >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            inFile >> a[i][j];
        }
    }

   for (int i = 1; i <= n; i++)
   {
        if (grad(i) == 0)
        {
            cout<<i<<" ";
        }
   }
   

    return 0;
}   