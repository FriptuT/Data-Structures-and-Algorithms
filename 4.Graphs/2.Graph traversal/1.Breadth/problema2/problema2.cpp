// afiseaza nodurile la care nu se poate ajunge pornind de la nodul w
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100], viz[100], coada[100], plecare, p, u, n, m, x, y, elPozitieP, i;

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
    for (int i = 1; i <= m; i++)
    {
        inFile >> x >> y;
        a[x][y] = a[y][x] = 1;
    }

    cout<<"Nod de plecare = ";cin>>plecare;

    parcurgere_latime(plecare);

    for (int i = 1; i <= u; i++)
    {
        cout<<coada[i]<<" ";
    }

    cout<<endl;
    cout<<"Nodurile la care nu se poate ajunge: "<<endl;
    for (int i = 1; i <= n; i++)
    {
        if (viz[i] == 0)
        {
            cout<<i<<" ";
        }
    }
    
    
    return 0;
}