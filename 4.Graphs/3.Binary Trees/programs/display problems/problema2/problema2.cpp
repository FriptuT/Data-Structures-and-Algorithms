// display the info of nodes with the order number odd
#include <iostream>
#include <fstream>
using namespace std;

int n,i,st[100],dr[100],info[100],rad,ordine[100],t;
int Rs ,Rd, Rr = 0;

void A(int rad){

    if (rad % 2 == 0)
    {
        cout<<info[rad]<<" ";
    }
    
    if (st[rad] != 0)
    {
      
        A(st[rad]);
    }

    if (dr[rad] != 0)
    {
      
        A(dr[rad]);
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

    A(rad);



    return 0;
}