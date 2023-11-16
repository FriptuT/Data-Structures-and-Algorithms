// sterge componentele cu nr de ordine par
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

void afisare(nod *p)
{
    nod *c;
    if (p == 0)
    {
        cout<<"Lista vida";
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

// sterge comp cu nr de ordine par
void sterge_pare(nod* &p, nod* &u)
{
    nod *s,*cs,*c;
    int nr;
    c = p;
    nr = 0;
    
    while (c)
    {
        nr++;
        if (nr % 2 == 0)
        {
            s = c;
            cs->urm = c->urm;
            c = c->urm;
            delete s;
        }
        else
        {
            cs = c;
            c = c->urm;
        }
    }
}


int main()
{
    creare(p,u);
    cout<<"lista este: "<<endl;
    afisare(p);
    cout<<endl;

    sterge_pare(p,u);
    cout<<endl;
    
    afisare(p);

    return 0;
}