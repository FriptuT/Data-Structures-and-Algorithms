// creare
//afisare de la dreapta spre stanga
//afisare de la stanga spre dreapta
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;

void creare(nod* &p, nod* &u)
{
    int n;
    nod *c;
    cout<<"nr de elemente este:";cin>>n;
    c = new nod;
    cout<<"x=";cin>>c->x;
    c->ad = NULL;
    c->as = NULL;
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

void listareStDr(nod *p, nod *u)
{
    nod *c;
    c = p;
    while (c)
    {
        cout<<c->x<<" ";
        c = c->ad;
    }
}

void listareDrSt(nod *p, nod *u)
{
    nod *c;
    c = u;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->as;
    }
}


int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    listareStDr(p,u);
    cout<<endl;
    listareDrSt(p,u);



    return 0;
}