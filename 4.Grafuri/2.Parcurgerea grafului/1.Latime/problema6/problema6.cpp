// *Numara componentele conexe
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100], coada[100], viz[100], plecare, elDinCoada, n, m, x, y, primu, ultimu, i;

void BFS(int plecare)
{
    int i;
    coada[1] = plecare;
    viz[plecare] = 1;

    primu = 1;
    ultimu = 1;
    while (primu <= ultimu)
    {
        elDinCoada = coada[primu];
        for (int i = 1; i <= n; i++)
        {
            if (viz[i] == 0 && a[i][elDinCoada] == 1)
            {
                ultimu++;
                coada[ultimu] = i;
                viz[i] = 1;
            }
        }
        primu++;
    }
}

int main()
{
    ifstream inFile("input.txt");
    inFile >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        inFile >> x >> y;
        a[x][y] = a[y][x] = 1;
    }

    int componenteConexe = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!viz[i])
        {
            BFS(i);
            componenteConexe++;
        }
    }

    cout<<endl<<endl;
    cout<<"Numarul de componente conexe este : "<<componenteConexe;

    

    return 0;
}