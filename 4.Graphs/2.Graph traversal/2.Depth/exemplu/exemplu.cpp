// exemplu standard parcurgere adancime
#include <iostream>
#include <fstream>
using namespace std;

int a[100][100], viz[100], plecare, i, noduri, muchii, x, y;

void parcurgere_adancime(int plecare){

    cout<<plecare<<endl;
    viz[plecare] = 1;

    for (int i = 0; i <= noduri; i++)
    {
        if (viz[i] == 0 && a[i][plecare] == 1)
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

    
    for (int i = 0; i <= noduri; i++)
    {
        viz[i] = 0;
    }
    
    
    cout<<"Nodul de plecare: ";cin>>plecare;

    
    parcurgere_adancime(plecare);

    //end program parcurgere adancime



    return 0;
}