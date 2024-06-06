// verifica daca contine frunze cu informatii impare
#include <iostream>
#include <fstream>
using namespace std;

int n, rad, st[100], dr[100], OK, p, info[100];

void contineInfo(int rad, int &OK)
{
    if (st[rad] == 0 && dr[rad] == 0)
    {
        if (info[rad] % 2 != 1)
        {
            OK = 0;
        }
    }

    if (st[rad] != 0)
    {
        contineInfo(st[rad], OK);
    }

    if (dr[rad] != 0)
    {
        contineInfo(dr[rad], OK);
    }
}

int main()
{
    ifstream inFile("input.txt");
    inFile >> n >> rad >> p;
    for (int i = 1; i <= n; i++)
    {
        inFile >> st[i] >> dr[i] >> info[i];
    }
    inFile.close();

    OK = 1;
    contineInfo(rad, OK);

    if (OK == 1)
    {
        cout << "Contine frunze cu info pare " << endl;
    }
    else
    {
        cout << "Nu contine frunze cu info impare" << endl;
    }

    return 0;
}