// insereaza dupa al 5-lea 
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod *urm;
};

nod *p,*u;

void creare(nod* &p, nod* &u)
{
    int n,i;
    nod *c;
    cout<<"nr de elemente:";cin>>n;
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
        u = 0;
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

void insereazaDupa5()
{
    nod *c,*q;
    c = p;
    
    for (int i = 1; i <= 4; i++)
    {
        c=c->urm;
    }
    
    q = new nod;
    cout<<"x=";cin>>q->x;
    q->urm = c->urm;
    c->urm = q;

    if (q->urm == 0)
    {
        u = q;
    }
    
}

int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    afisare(p);
    cout<<endl;

    
    insereazaDupa5();
    cout<<endl;

    cout<<"afisare dupa inserare:"<<endl;
    afisare(p);



    return 0;
}