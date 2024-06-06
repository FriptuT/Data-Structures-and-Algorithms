// construieste lista cu elementele impare din matricea A cu n linii si n coloane
#include <iostream>
#include <stdlib.h>
using namespace std;

struct nod{
    int x;
    nod* urm;
};

nod *p,*u;
int a[100][100],n;

void listare(nod *p)
{
    nod *c;
    if (p == 0)
    {
        cout<<"Lista este vida";
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

void CONSTRUCTIE(int a[100][100],int n, nod* &p, nod* &u)
{
    nod *c;
    int nrl;

    nrl = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] % 2 == 1)
            {
                nrl++;
                if (nrl == 1)
                {
                    c = new nod;
                    c->x = a[i][j];
                    c->urm = NULL;
                    p = c;
                    u = c;
                }
                else
                {
                    c = new nod;
                    c->x = a[i][j];
                    c->urm = NULL;
                    u->urm = c;
                    u = c;
                }
            }
        }
    }
}

int main()
{
    cout<<"n=";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<"a[i][j]=";cin>>a[i][j];
        }
    }

    CONSTRUCTIE(a,n,p,u);
    cout<<"Lista este:"<<endl;

    listare(p);
    




    return 0;
}