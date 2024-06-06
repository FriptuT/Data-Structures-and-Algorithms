// construieste lista cu elemente de forma 4k +1 dintre primele n numere naturale
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod* urm;
};

nod *p,*u;
int n,x;

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

void CONSTRUCTIE(int n, nod* &p, nod* &u)
{
    nod *c;
    int nrl;

    nrl = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 4 == 1)
        {
            nrl++;
            if (nrl == 1)
            {
                c = new nod;
                c->x = i;
                c->urm = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = i;
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
    
    CONSTRUCTIE(n,p,u);

    cout<<"Lista este:"<<endl;
    listare(p);


    return 0;
}