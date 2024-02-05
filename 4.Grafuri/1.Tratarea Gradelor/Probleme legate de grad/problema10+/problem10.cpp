// * Verifica daca graful este complet folosind decat matricea de adiacenta 
#include <iostream>
#include <fstream>
using namespace std;


int a[100][100],n,i,j;

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
    
    int NR = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 1)
            {
                NR++;
            }
        }
    }

    int m = (n*(n-1))/2;
    if (NR/2 == m )
    {
        cout<<"Este graf complet";
    }
    else
    {
        cout<<"Nu e graf complet";
    }

    

    return 0;
}   