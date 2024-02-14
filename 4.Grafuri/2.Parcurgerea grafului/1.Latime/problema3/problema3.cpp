// verifica la cate noduri se poate ajunge pornind de la nodul w
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100], viz[100], coada[100], plecare, elPozitieP, p, u, i, n, m, x, y;

void parcurgere_latime(int plecare)
{
    int i;
    coada[1] = plecare;
    viz[plecare] = 1;

    p = 1;
    u = 1;
    while (p <= u)
    {
        elPozitieP = coada[p];
        for (int i = 1; i <= n; i++)
        {
            if (viz[i] == 0 && a[i][elPozitieP] == 1)
            {
                u++;
                coada[u] = i;
                viz[i] = 1;
            }
        }
        p++;
    }
}

int main()
{
    ifstream inFile("input.txt");

    inFile >> n >> m;

    for (int i = 0; i <= m; i++)
    {
        inFile >> x >> y;
        a[x][y] = a[y][x] = 1;
    }

    cout<<"Plecare: ";cin>>plecare;
    parcurgere_latime(plecare);
    
    // verifica la cate noduri se poate ajunge pornind de la nodul w
    int nr = 0;
    for (int i = 1; i <= n; i++)
    {
        if (viz[i] == 1)
        {
            nr++;
        }
    }

    cout<<"Se poate ajunge la : "<<nr<<" noduri."<<endl;
    

    return 0;
}