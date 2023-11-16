// sterge comp cu nr de ordine 5 ,daca contine valoarea 0
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

void afisare(nod* p)
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

// sterge comp cu nr de ordine 5 ,daca contine valoarea 0
void sterge_5(nod* &p, nod* &u)
{
    nod *cs,*s,*c;

    c = p;
    for (int i = 1; i <= 4; i++)
    {
        cs = c;
        c = c->urm;
    }

    if (c->x == 0)
    {
        s = c;
        cs->urm = c->urm;
        
        delete s;
    }
}


int main()
{
    creare(p,u);
    cout<<"Lista este: "<<endl;
    afisare(p);
    cout<<endl;

    sterge_5(p,u);
    cout<<endl;

    afisare(p);




    return 0;
}