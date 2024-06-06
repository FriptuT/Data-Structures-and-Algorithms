// sterge primele 3 componente
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
    cout<<"Nr de componente: ";cin>>n;
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

void listare(nod *p)
{
    nod *c;
    if (p == 0)
    {
        cout<<"Lista vida";
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

void sterge_primele3(nod* &p, nod* &u)
{
    nod *s,*s2,*s3;

    s = p;
    s2 = p->urm;
    s3 = p->urm->urm;
    
    p = p->urm->urm->urm;
    
    delete s;
    delete s2;
    delete s3;
}

int main()
{
    creare(p,u);
    cout<<"Lista este: "<<endl;
    listare(p);
    cout<<endl;

    sterge_primele3(p,u);
    cout<<endl;

    listare(p);


    return 0;
}