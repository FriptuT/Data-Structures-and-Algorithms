// nr nodurilor care au doar descendent stang
#include <iostream>
#include <fstream>
using namespace std;


int n,rad,i,st[100],dr[100],info[100],NR;

void A(int rad, int &NR){
    if (st[rad] != 0 && dr[rad] == 0)
    {
        cout<<rad<<" "<<endl;
        NR = NR + 1;
    }

    if (st[rad] != 0)
    {
        A(st[rad],NR);
    }

    if (dr[rad] != 0)
    {
        A(dr[rad],NR);
    }
}

int main()
{
    ifstream inFile("input.txt");
    inFile >> n >> rad;
    for (int i = 1; i <= n; i++)
    {
        inFile >> st[i] >> dr[i] >> info[i];
    }
    inFile.close();

    NR = 0;
    A(rad,NR);

    cout<<NR<<" ";


    return 0;
}