// sterge comp de la inceputul listei cat timp au valoarea identica cu urmatoarea
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod* urm;
};

nod *p,*u;

void creare(nod* &p, nod* &u)
{
    int n,i;
    nod *c;
    cout<<"NR de componente: ";cin>>n;
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
            c=c->urm;
        }
    }
}

// comp de la inceputul listei care au valoarea identica cu urmatoarea

void sterge_toate(nod* &p, nod* &u)
{
    nod *s;

    while (p != 0 && p->x == p->urm->x)
    {
        s = p;
        p = p->urm;
        delete s;
    }
}

int main()
{
    creare(p,u);
    cout<<"lista este: "<<endl;
    afisare(p);

    sterge_toate(p,u);
    cout<<endl;

    afisare(p);
    cout<<endl;


    return 0;
}