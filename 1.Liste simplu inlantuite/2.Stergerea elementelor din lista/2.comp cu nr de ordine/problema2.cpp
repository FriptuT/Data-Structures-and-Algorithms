// sterge componenta cu numarul de ordine 4
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
        cout<<"lista vida";
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

// sterge comp cu nr de ordine 4
void sterge_patru(nod* &p, nod* &u)
{
    nod *s,*cs,*c;

    c=p;
    for (int i = 1; i <= 3; i++)
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

int main()
{
    creare(p,u);
    cout<<"Lista este:"<<endl;
    afisare(p);
    cout<<endl;

    sterge_patru(p,u);
    cout<<endl;

    afisare(p);



    return 0;
}