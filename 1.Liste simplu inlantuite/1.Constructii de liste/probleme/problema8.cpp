// construieste lista cu elemente > 6 din fisierul A.txt
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

struct nod{
    int x;
    nod* urm;
};

nod *p,*u;
int x;

void listare(nod* p)
{
    nod *c;
    if (p == 0)
    {
        cout<<"Lista vida";
    }
    else
    {
        c=p;
        while (c)
        {
            cout<<c->x<<" ";
            c=c->urm;
        }
    }
}

void CONSTRUCTIE(int x, nod* &p, nod* &u)
{
    nod *c;
    int nrl;

    nrl = 0;
    ifstream fin("a.txt");
    while (fin>>x)
    {
        if (x > 6)
        {
            nrl++;
            if (nrl == 1)
            {
                c = new nod;
                c->x = x;
                c->urm = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = x;
                c->urm = NULL;
                u->urm = c;
                u = c;
            }
        }
    }
}


int main()
{
    CONSTRUCTIE(x,p,u);

    cout<<"Lista este:"<<endl;
    listare(p);


    return 0;
}