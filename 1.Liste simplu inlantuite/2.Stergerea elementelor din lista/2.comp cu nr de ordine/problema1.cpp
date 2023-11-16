// sterge componenta cu numarul k (k este parametru)
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
    nod *c;
    cout<<"nr de componente: ";cin>>n;
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

void afisare(nod *p)
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
            c = c->urm;
        }
    }
}

//sterge comp cu nr k; k parametru
void sterge_k(nod* &p, nod* &u, int k)
{
    nod *s,*c,*cs;

    if (k == 1)
    {
        s = p;
        p=p->urm;
        if (p == 0)
        {
            u = 0;
        }
        delete s;
    }
    else
    {
        c = p;
        for (int i = 1; i <= k-1; i++)
        {
            cs = c;
            c = c->urm;
        }

        s = c;
        cs->urm = c->urm;

        if (cs->urm == 0)
        {
            u = cs;
        }
        
        delete s;
    }
    
}


int main()
{   
    creare(p,u);
    cout<<"Lista este: "<<endl;
    afisare(p);
    cout<<endl;

    sterge_k(p,u,3);
    cout<<endl;

    afisare(p);
    cout<<endl;


    return 0;
}