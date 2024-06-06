// afiseaza nodurile la care se poate ajunge pornind din nodul t
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100], viz[100], w, i, noduri, muchii, x, y;

void parcurgere_adancime(int w){

    cout<<w<<endl;
    viz[w] = 1;

    for (int i = 0; i <= noduri; i++)
    {
        if (viz[i] == 0 && a[i][w] == 1)
        {
            parcurgere_adancime(i);
        }
    }
}


int main(){

    ifstream inFile("input.txt");

    inFile >> noduri >> muchii;

    for (int i = 1; i <= muchii; i++)
    {
        inFile >> x >> y;
        a[x][y] = a[y][x] = 1;
    }

    
    for (int i = 1; i <= noduri; i++)
    {
        viz[i] = 0;
    }
    
    
    cout<<"Nodul de plecare: ";cin>>w;

    
    parcurgere_adancime(w);

    int q,r;
    cout<<"Q=";cin>>q;
    cout<<"R=";cin>>r;

    int  ok = 1;                    // pp exista lant
    for (int i = q; i <= r; i++)
    {
        if (viz[i] != 1)            //daca intre Q si R se gaseste nod nevizitat , ok = 0;
        {
            ok = 0;
            cout<<i<<" ";
        }
    }
    cout<<endl;

    if (ok == 1)
    {
        cout<<"Exista lant"<<endl;
    }
    else
    {
        cout<<"Nu exista lant"<<endl;
    }
    


    //end program parcurgere adancime



    return 0;
}