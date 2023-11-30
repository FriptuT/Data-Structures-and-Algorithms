// returneaza rezultatul verificarii prin ok ca parametru:  x2 < x6
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;

void creare(nod*&p, nod*&u)
{
    int n;
    nod *c;
    cout<<"nr de elemente este:";cin>>n;
    c = new nod;
    c->ad = NULL;
    p = c;
    u = c;

    for (int i = 1; i <= n-1; i++)
    {
        c = new nod;
        cout<<"x=";cin>>c->x;
        c->ad = NULL;
        c->as = u;
        u->ad = c;
        u = c;
    }
}

void listareStDr(nod *p)
{
    nod *c;
    c = p;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->ad;
    }
}

void listareDrSt(nod *u)
{
    nod *c;
    c = u;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->as;
    }
}

bool verifica_rezultat(nod *p)
{
    nod *c;
    c = p;

    for (int i = 1; i <= 5; i++)
    {
        c = c->ad;
    }
    
    
    if (p->ad->x < c->x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    listareStDr(p);
    cout<<endl;

    bool rezultat = verifica_rezultat(p);

    cout<<rezultat;

    return 0;
}