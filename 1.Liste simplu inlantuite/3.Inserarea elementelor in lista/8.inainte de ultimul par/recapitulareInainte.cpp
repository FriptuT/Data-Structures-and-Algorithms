// insereaza inainte de ultimul par
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod *urm;
};

nod *p,*u;

void creare(nod *&p, nod*&u)
{
    int n;
    nod *c;
    cout<<"nr de elemente: ";cin>>n;
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

void inserare_inaintea_ultimuluiPAR()
{
    nod *c,*t,*q;

    q = NULL;
    c = p;
    while (c)
    {
        if ((c->urm) && (c->urm->x % 2 == 0))
        {
            q = c;
        }
        c = c->urm;
    }

    if (q)
    {
        t = new nod;
        cout<<"t=";cin>>t->x;
        t->urm = q->urm;
        q->urm = t;

        if (t->urm == 0)
        {
            u = t;
        }
    }
}



int main(){
    creare(p,u);
    cout<<"lista este:"<<endl;
    afisare(p);
    cout<<endl;

    inserare_inaintea_ultimuluiPAR();
    cout<<endl;

    cout<<"afisare dupa inserare:"<<endl;
    afisare(p);



}