// nr nodurilor cu informatia "val"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int n,rad,i,st[100],dr[100],NR;
string info[100];

void A(int rad, int &NR){
    if (info[rad] == "val")
    {
        NR++;
    }
    if (st[rad] != 0)
    {
        A(st[rad],NR);
    }
    if (dr[rad] != 0)
    {
        A(dr[rad], NR);
    }
}

int main(){
    ifstream inFile("input.txt");
    inFile >> n >> rad;
    for (int i = 1; i <= n; i++)
    {
        inFile >> st[i] >> dr[i] >> info[i];
    }
    inFile.close();

    NR = 0;
    A(rad,NR);

    cout<<"NR = ";cout<<NR;




    return 0;
}