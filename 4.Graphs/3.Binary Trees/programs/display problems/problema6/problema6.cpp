// Nodurile care au doar descendentul drept
// The nodes that have only the right descendent
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, st[100], dr[100], info[100];

void rightDesc(int rad)
{
    if (st[rad] == 0 && dr[rad] != 0)
    {
        cout << rad << " ";
    }

    if (st[rad] != 0)
    {
        rightDesc(st[rad]);
    }
    if (dr[rad] != 0)
    {
        rightDesc(dr[rad]);
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

    rightDesc(rad);




    return 0;
}