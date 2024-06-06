// creati - afisati o lista
// creati un subprogram care sterge prima componenta
#include <iostream>
using namespace std;

struct nod
{
    int x;
    nod* urm;
};

nod *p,*u;

void creare(nod* &p, nod* &u)
{
    int n,i;
    nod *c;
    cout<<"Nr de componente:";cin>>n;
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

void listare(nod* p)
{
    nod *c;
    if (p == 0)
    {
        cout<<"Lista este vida";
    }
    else
    {
        c = p;
        while (c)
        {
            cout<<c->x<<" ";
            c = c->urm;
        }
    }
}

void sterge_prima(nod* &p, nod* &u)
{
    nod *s;
    s = p;
    p = p->urm;
    if (p == 0)
    {
        u = 0;
    }
    delete s;
}

int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    listare(p);
    cout<<endl;

    sterge_prima(p,u);

    cout<<"Lista dupa stergerea primei comp:"<<endl;
    listare(p);



    return 0;
}