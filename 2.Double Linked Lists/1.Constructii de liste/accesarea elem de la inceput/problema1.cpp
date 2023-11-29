// accesarea elementelor de la inceput
// creati o functie care verifica daca x2 este par
#include <iostream>
using namespace std;

struct nod
{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;
int ok;

void creare(nod *&p, nod*&u)
{
    int n;
    nod *c;
    cout<<"nr de elemente este:";cin>>n;
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

void listareStDr(nod *p, nod *u)
{
    nod *c;
    c = p;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->ad;
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

void x2EstePAR(nod *p, int &ok)
{
    nod *c;
    c = p;
    ok = 0;
    if (p->ad->x % 2 == 0)
    {
        ok = 1;
    }
}



int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    listareStDr(p,u);
    cout<<endl;

    x2EstePAR(p,ok);

    if (ok == 1)
    {
        cout<<"al 2-lea este par";
    }
    else
    {
        cout<<"nu este par";
    }

    return 0;
}