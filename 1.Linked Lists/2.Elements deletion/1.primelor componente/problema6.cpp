//sterge primele k componente (k dat ca parametru)
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod* urm;
};

nod *p,*u;
int k;

void creare(nod* &p, nod* &u)
{
    int n,i;
    nod* c;
    cout<<"Nr de componente: ";cin>>n;
    c = new nod;
    cout<<"x=";cin>>c->x;
    c->urm = NULL;
    p = c;
    u = c;

    for (int i = 1; i <= n-1; i++)
    {
        c = new nod;
        cout<<"x=";cin>>c->x;
        c->urm = NULL;
        u->urm = c;
        u = c;
    }
}

void listare(nod* p)
{
    nod *c;
    if (p == 0)
    {
        cout<<"Lista este vida";
    }
    else
    {
        c = p;
        while (c)
        {
            cout<<c->x<<" ";
            c=c->urm;
        }
    }
}

void sterge_primeleK(nod* &p, nod* &u, int k)
{
    nod *s;
    for (int i = 1; i <= k; i++)
    {
        s = p;
        p = p->urm;
        if (p == 0)
        {
            u = 0;  
        }
        delete s;
    }
}

int main()
{
    creare(p,u);
    cout<<"Lista este: "<<endl;
    listare(p);
    cout<<endl;

    sterge_primeleK(p,u,k);
    cout<<endl;

    listare(p);
    


    return 0;
}