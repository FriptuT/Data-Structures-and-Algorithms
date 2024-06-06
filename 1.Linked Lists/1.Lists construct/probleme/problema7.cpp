// construieste lista cu elemente 3k + 1 dintre cele n citite
#include <iostream> 
#include <stdlib.h>
using namespace std;

struct nod{
    int x;
    nod* urm;
};

nod *p,*u;
int z,n;

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

void CONSTRUCTIE(int z, int n, nod* &p, nod* &u)
{
    nod *c;
    int nrl;

    nrl = 0;
    for (int i = 1; i <= n; i++)
    {
        cout<<"z=";cin>>z;
        if (z % 3 == 1)
        {
            nrl++;
            if (nrl == 1)
            {
                c = new nod;
                c->x = z;
                c->urm = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = z;
                c->urm = NULL;
                u->urm = c;
                u = c;
            }
        }
    }
}

int main()
{
    cout<<"n=";cin>>n;
    CONSTRUCTIE(z,n,p,u);

    cout<<"lista este:"<<endl;
    listare(p);


    return 0;
}