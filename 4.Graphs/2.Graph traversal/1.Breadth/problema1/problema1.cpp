// afiseaza nodurile la care se poate ajunge pornind de la nodul t
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100],viz[100],coada[100],n,m,p,u,i,plecare,elPozitieP,x,y;

void parcurgere_latime(int plecare){
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
    
    for (int i = 1; i <= n; i++)
    {
        viz[i] = 0;
    }
    
    cout<<"Nodul de plecare:";cin>>plecare;

    parcurgere_latime(plecare);

    for (int i = 1; i <= u; i++)
    {
        cout<<coada[i]<<" ";
    }
    
    
    inFile.close();


    return 0;
}