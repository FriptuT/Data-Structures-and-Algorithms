//cu elementele nenule din sirul x cu n elemente
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod* urm;
};

nod *p,*u;
int x[100],n;

void listare(nod* p)
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

void CONSTRUCTIE(int x[100], int n, nod* &p, nod* &u)
{
    nod *c;
    int nrl;

    nrl = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x[i] != 0)
        {
            nrl++;
            if (nrl == 1)
            {
                c = new nod;
                c->x = x[i];
                c->urm = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = x[i];
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
    for (int i = 1; i <= n; i++)
    {
        cout<<"x=";cin>>x[i];
    }
    
    CONSTRUCTIE(x,n,p,u);
    
    cout<<"Lista este:"<<endl;
    listare(p);




    return 0;
}