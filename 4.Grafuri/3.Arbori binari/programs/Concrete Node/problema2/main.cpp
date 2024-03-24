// informatia descendentului stang al nodului "nod"
#include <iostream>
#include <fstream>
using namespace std;


int n,rad,nod,i,st[100],dr[100], info[100];

void display(int rad, int nod){
    if (rad == nod)
    {
        if (st[rad] != 0) cout<<info[rad]<<" ";
        else
            cout<<"nu are descendent stang";
        
    }
    else{
        if (st[rad] != 0)
        {
            display(st[rad], nod);
        }
        
        if (dr[rad] != 0)
        {
            display(dr[rad],nod);
        }
    }
    
}

int main()
{
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