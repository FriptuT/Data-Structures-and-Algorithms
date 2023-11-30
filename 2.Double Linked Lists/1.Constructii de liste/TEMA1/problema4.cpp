// intoarce prin parametrul ok, rezultatul verificarii:
// primele 3 componente sunt identice
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;
int ok;

void creare(nod* &p, nod *&u)
{
    int n;
    nod *c;
    cout<<"nr de elemente: ";cin>>n;
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
        c=c->ad;
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

void primele_trei_ident(nod *p, int &ok)
{
    nod *c;
    c = p;
    ok = 0;
    if (c->x == c->ad->x && c->ad->x == c->ad->ad->x)
    {
        ok = 1;
    }
}

int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    listareStDr(p);
    cout<<endl;

    primele_trei_ident(p,ok);
    
    if (ok == 1)
    {
        cout<<"primele 3 identice";
    }
    else
    {
        cout<<"nu sunt identice";
    }


    return 0;
}