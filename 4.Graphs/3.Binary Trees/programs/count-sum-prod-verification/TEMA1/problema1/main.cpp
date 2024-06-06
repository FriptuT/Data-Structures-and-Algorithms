// numarul nodurilor care contin informatia 20
#include <iostream>
#include <fstream>
using namespace std;


int n,rad,st[100],dr[100],info[100],NR;

// acumulare
void nrNoduri(int rad, int &NR){
    if (info[rad] == 20)
    {
        NR = NR + 1;
    }
    if (st[rad] != 0)
    {
        nrNoduri(st[rad], NR);
    }
    if (dr[rad] != 0)
    {
        nrNoduri(dr[rad], NR);
    }
}


int main()
{
    ifstream inFile("input.txt");
    inFile >> n >> rad;
    for (int i = 1; i <= n; i++)
    {
        inFile >> st[i] >> dr[i] >>info[i];
    }
    inFile.close();

    nrNoduri(rad,NR = 0);

    cout<<NR<<" ";

    return 0;
}