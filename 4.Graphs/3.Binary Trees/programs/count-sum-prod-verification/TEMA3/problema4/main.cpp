#include <iostream>
#include <fstream>
using namespace std;

int n, rad, st[100], dr[100], i, info[100];

bool esteNodComplet(int nod){
    return (st[nod] != 0 && dr[nod] != 0) || (st[nod] == 0 && dr[nod] == 0);
}


bool arboreComplet(int rad)
{
    if (rad == 0)
    {
        return true;
    }
    
    if (!esteNodComplet(rad))
    {
        return false;
    }
    
    return arboreComplet(st[rad]) && arboreComplet(dr[rad]);
}

int main()
{
    ifstream inFile("input.txt");
    inFile >> n >> rad;
    for (int i = 1; i <= n; i++)
    {
        inFile >> st[i] >> dr[i] >> info[i];
    }
    inFile.close();

    if (arboreComplet(rad))
    {
        cout<<"Arborele este complet!";
    }
    else
    {
        cout<<"Arborele nu este complet!";
    }
    

    

    return 0;
}
