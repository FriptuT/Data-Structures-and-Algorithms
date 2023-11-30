// afiseaza x5
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;

void creare(nod *&p,nod*&u)
{
    int n;
    nod *c;
    cout<<"nr de elemente:";cin>>n;
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

void afisareStDr(nod*p)
{
    nod*c;
    c = p;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->ad;
    }
}

void afisareDrSt(nod *u)
{
    nod *c;
    c = u;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->as;
    }
}

void afiseaza_elem5(nod *p)
{
    nod *c;
    c = p;
    for (int i = 1; i <= 4; i++)
    {
        c = c->ad;
    }
    
    cout<<c->x;
}

int main()
{
    creare(p,u);
    cout<<"lista este :"<<endl;
    afisareStDr(p);
    cout<<endl;

    afiseaza_elem5(p);





    return 0;
}   