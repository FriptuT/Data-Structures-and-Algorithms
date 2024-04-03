/*
    Nodurile a caror informatie este egala cu valoarea "val" si sunt frunze
*/

#include <iostream>
#include <fstream>
using namespace std;

int n, rad, nod, st[100], dr[100];
int info[100];

void informatieNoduri(int rad)
{

    if (info[rad] == 50)
    {
        if (st[rad] == 0 && dr[rad] == 0)
        {
            cout<<rad<<" ";
        }
        
    }
    else
    {
        if (st[rad] != 0)
        {
            informatieNoduri(st[rad]);
        }

        if (dr[rad] != 0)
        {
            informatieNoduri(dr[rad]);
        }
    }
}

int main()
{
    ifstream inFile("input.txt");

    inFile >> n >> rad;
    for (int i = 1; i <= n; i++)
    {
        inFile>>st[i]>>dr[i]>>info[i];
    }
    inFile.close();

    informatieNoduri(rad);
    

    return 0;
}