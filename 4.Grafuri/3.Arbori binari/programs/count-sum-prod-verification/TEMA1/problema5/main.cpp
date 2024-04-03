// aflati numarul nivelelor arborelui
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int n,rad,i,st[100],dr[100],nivel,maxNivel,info[100];

void A(int rad, int nivel){

    if (nivel > maxNivel)
    {
        maxNivel = nivel;
    }
    
    if (st[rad] != 0)
    {
        A(st[rad], nivel + 1);
    }
    if (dr[rad] != 0)
    {
        A(dr[rad], nivel + 1);
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

    maxNivel = 0;
    nivel = 0;
    A(rad,nivel);

    cout<<"nr de niveluri este : "<< maxNivel<<endl;



    return 0;
}