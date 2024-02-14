// verifica daca exista lant cu extremitatile q si r;

#include <iostream>
#include <fstream>
using namespace std;

int a[100][100], coada[100], viz[100], plecare, elDinCoada, n, m, x, y, i, primu, ultimu,q,r;

void BFS(int plecare)
{
    int i;
    coada[1] = plecare;
    viz[plecare] = 1;

    primu = 1;
    ultimu = 1;
    while (primu <= ultimu)
    {
        elDinCoada = coada[primu]; // 1
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

    for (int i = 1; i <= n; i++)
    {
        viz[i] = 0;
    }
    

    cout << "Nodul de plecare: ";
    cin >> plecare;

    // verifica daca exista lant cu extremitatile q si r;
    cout<<"Extremitate stanga: ";cin>>q;
    cout<<"Extremitate dreapta: ";cin>>r;

    BFS(plecare);

    for (int i = 1; i <= ultimu; i++)
    {
        cout<<coada[i]<<" ";
    }

    int ok = 1;
    for (int i = q; i <= r; i++)
    {
        if (viz[i] != 1)
        {
            ok = 0;
        }
    }

    cout<<endl;
    
    if (ok == 1)
    {
        cout<<"Exista lant";
    }
    else
    {
        cout<<"Nu exista lant";
    }
    

    
    inFile.close();

    return 0;
}