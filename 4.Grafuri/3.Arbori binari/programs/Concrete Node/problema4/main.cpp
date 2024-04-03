// tatal nodului nod
#include <iostream>
#include <fstream>
using namespace std;


int n,rad,nod,i,st[100],dr[100],info[100];


// rad = nod curent
// nod = nod cautat
// parinte = tatal nod
void display(int rad, int nod, int parinte = -1){
    if (rad == 0)
    {
        return;
    }
    
    if (rad == nod)
    {
        if (parinte == -1)
        {
            cout<<"Nodul "<< nod << " este radacina si nu are parinte. ";
        }
        else
        {
            cout<<"Parintele nodului " << nod << " este " <<parinte<<".";
        }
        return;
    }
    else
    {
        if (st[rad] != 0)
        {
            display(st[rad],nod, rad);
        }
        if (dr[rad] != 0)
        {
            display(dr[rad], nod, rad);
        }
    }
}

int main(){
    ifstream inFile("input.txt");
    inFile >> n >> rad >> nod;
    for (int i = 1; i <= n; i++)
    {
        inFile >> st[i] >> dr[i] >> info[i];
    }
    
    inFile.close();

    display(rad,nod);


    
    return 0;
}