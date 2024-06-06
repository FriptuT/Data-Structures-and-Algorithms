// nodurile care au doar descendentul stang
#include <iostream>
#include <fstream>
using namespace std;

int n,i,rad,st[100],info[100],dr[100];

void onlyLeft(int rad){
    if (st[rad] != 0 && dr[rad] == 0)
    {
        cout<<rad<<" ";
    }
    
    if (st[rad] != 0)
    {
        onlyLeft(st[rad]);
    }
    if (dr[rad] != 0)
    {
        onlyLeft(dr[rad]);
    }
    
    
}

int main(){
    ifstream inFile("input.txt");
    
    inFile >> n >> rad;
    for ( i = 1; i <= n; i++)
    {
        inFile >> st[i] >> dr[i] >> info[i];
    }
    inFile.close();

    onlyLeft(rad);



    return 0;
}   