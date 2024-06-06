// inserare dupa ultimul par
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod *urm;
};

nod *p,*u;

void creare(nod *&p, nod *&u)
{
    int n,i;
    nod *c;
    cout<<"nr de elemente este:";cin>>n;
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
        cout<<"lista este vida";
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

void inserare_dupa_ultimulPAR()
{
    nod *c,*q,*q1;

    q = NULL;
    c = p;
    while (c)
    {
        if (c->x % 2 == 0)
        {
            q = c;
        }
        c=c->urm;
    }
    
    if (q)
    {
        q1 = new nod;
        cout<<"q1=";cin>>q1->x;
        q1->urm = q->urm;
        q->urm = q1;

        if (q1->urm == 0)
        {
            u = q1;
        }
    }
}


int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    afisare(p);
    cout<<endl;

    inserare_dupa_ultimulPAR();
    cout<<endl;

    cout<<"afisare dupa inserare:"<<endl;
    afisare(p);

    

    return 0;
}