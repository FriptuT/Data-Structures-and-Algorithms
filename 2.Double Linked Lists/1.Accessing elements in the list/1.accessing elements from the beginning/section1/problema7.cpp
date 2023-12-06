// afiseaza dupa macheta x2,x3,x4,x5
#include <iostream>
using namespace std;

struct nod
{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;

void creare(nod *&p, nod*&u)
{
    int n;
    nod *c;
    cout<<"nr de elem este:";cin>>n;
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

void afisareStDr(nod *p)
{
    nod *c;
    c = p;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->ad;
    }
}

void afisareDrSt(nod *p)
{
    nod *c;
    c = u;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->as;
    }
}

// afiseaza x2,x3,x4,x5
void afiseaza_model(nod *p)
{
    nod *c;
    c = p;
    cout<<c->ad->x<<","<<c->ad->ad->x<<","<<c->ad->ad->ad->x<<",";

    for (int i = 1; i <= 4; i++)
    {
        c = c->ad;
    }
    cout<<c->x;
}

int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    afisareStDr(p);

    afiseaza_model(p);

    return 0;
}