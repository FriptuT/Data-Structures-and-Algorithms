// verifica daca toate nodurile contin informatii pare
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, st[100], dr[100], info[100], i,OK;

void toate(int rad, int &OK)
{
    if (info[rad] % 2 != 0)
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

    OK = 1;
    toate(rad,OK);

    if (OK == 1)
    {
        cout<<"Toate nodurile contin informatii pare";
    }
    else
    {
        cout<<"Nu toate nodurile....";
    }
    

    return 0;
}