// returneaza Xk unde k este dat ca parametru
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;
int k;

void creare(nod*&p,nod*&u)
{
    int n;
    cout<<"nr de elemente este :";cin>>n;
    nod*c;
    c = new nod;
    cout<<"x=";cin>>c->x;
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
        c = c->ad;
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

int afiseazaK(nod *p, int k)
{
    nod *c;
    c = p;
    cout<<"k=";cin>>k;

    for (int i = 1; i <= k-1; i++)
    {
        c=c->ad;
    }
    return c->x;
}

int main()
{

    creare(p,u);
    listareStDr(p);
    cout<<endl;

    cout<<afiseazaK(p,k);




    return 0;
}   