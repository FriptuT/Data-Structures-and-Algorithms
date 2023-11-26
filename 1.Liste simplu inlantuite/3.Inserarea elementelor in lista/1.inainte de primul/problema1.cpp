// insereaza inainte de primul element
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
    cout<<"Nr de elemente este:";cin>>n;
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

void insereazaInainteDePrimul()
{
    nod *c;
    c = new nod;
    cout<<"x=";cin>>c->x;
    c->urm = p;
    p = c;
}


int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    afisare(p);

    cout<<endl;
    insereazaInainteDePrimul();
    cout<<endl;


    cout<<"afisare dupa inserare:"<<endl;
    afisare(p);


    

    return 0;
}