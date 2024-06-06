// *Verifica daca graful este conex
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

    cout<<"Nodul de plecare:";cin>>plecare;

    BFS(plecare);

    for (int i = 1; i <= ultimu; i++)
    {
        cout<<coada[i]<<" ";
    }
    cout<<endl<<endl;
    // *Verifica daca graful este conex

    int ok = 1;//presupunem ca graful este conex ( pt oricare 2 noduri distincte exista lant care sa le aiba ca extremitati)
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
        if (viz[i] != 1)
        {
            ok = 0;
        }
    }
    
    if (ok == 1)
    {
        cout<<"graf conex";
    }
    else
    {
        cout<<"graful nu este conex";
    }
    

    return 0;
}