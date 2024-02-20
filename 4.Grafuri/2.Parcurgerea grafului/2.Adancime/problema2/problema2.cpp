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

    cout<<"Noduri la care nu se poate ajunge:"<<endl;
    for (int i = 1; i <= noduri; i++)
    {
        if (viz[i] == 0)
        {
            cout<<i<<" ";
        }
        
    }
    

    //end program parcurgere adancime



    return 0;
}