// odd leaves with odd information
#include <iostream>
#include <fstream>
using namespace std;


int n, rad, i, st[100],dr[100],info[100];


void display(int rad){
    if (st[rad] == 0 && dr[rad] == 0)
    {
        if (rad % 2 == 0 && info[rad] % 2 != 0)
        {
            cout<<rad<<" ";
        }
    }

    if (st[rad] != 0)
    {
        display(st[rad]);
    }

    if (dr[rad] != 0)
    {
        display(dr[rad]);
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



    display(rad);


    return 0;
}