// *Afiseaza componentele conexe
#include <iostream>
#include <fstream>
using namespace std;


int a[100][100],coada[100],viz[100],plecare,primul,ultimul,elDinCoada,x,y,i,n,m;

void BFS(int plecare){
    int i;
    coada[1] = plecare;
    viz[plecare] = 1;

    primul = 1;
    ultimul = 1;
    while (primul <= ultimul)
    {
        elDinCoada = coada[primul];
        for (int i = 1; i <= n; i++)
        {
            if (viz[i] == 0 && a[i][elDinCoada] == 1)
            {
                ultimul++;
                coada[ultimul] = i;
                viz[i] = 1;
            }
        }
        primul++;
    }

    for (int i = 1; i <= ultimul; i++)
    {
        cout<<coada[i]<<" ";
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
    
    cout<<endl;

    int nrComponenteConexe = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!viz[i])
        {
            BFS(i);
            nrComponenteConexe++;
        }
        cout<<endl;
    }
    

    cout<<"Numar componente conexe : "<<nrComponenteConexe;



    return 0;
}