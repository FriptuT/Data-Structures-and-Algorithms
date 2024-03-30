//verifica daca contine noduri cu informatii impare
#include <iostream>
#include <fstream>
using namespace std;


int n,rad,st[100],dr[100],info[100],OK;

void contineInfo(int rad, int &OK){
    if (info[rad] % 2 != 0)
    {
        OK = 0;
    }

    if (st[rad] != 0)
    {
        contineInfo(st[rad],OK);
    }

    if (dr[rad] != 0)
    {
        contineInfo(dr[rad],OK);
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

    OK = 1;
    contineInfo(rad,OK);

    if (OK == 1)
    {
        cout<<"Contine noduri cu info pare";
    }
    else
    {
        cout<<"Nu contine noduri cu info pare";
    }



    return 0;
}