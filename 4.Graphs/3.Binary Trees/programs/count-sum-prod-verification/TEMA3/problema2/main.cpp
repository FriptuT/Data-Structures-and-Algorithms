// verifica daca toate nodurile contin informatii pare
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, st[100], dr[100], i,OK;
string info[100];

void toate(int rad, int &OK)
{
    if (info[rad] != "val")
    {
        OK = 0;
    }
    if (st[rad] != 0)
    {
        toate(st[rad], OK);
    }
    if (dr[rad] != 0)
    {
        toate(dr[rad], OK);
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

    toate(rad,OK=1);

    if (OK == 1)
    {
        cout<<"Toate nodurile contin informatia 'val' ";
    }
    else
    {
        cout<<"Nu toate nodurile....";
    }
    

    return 0;
}