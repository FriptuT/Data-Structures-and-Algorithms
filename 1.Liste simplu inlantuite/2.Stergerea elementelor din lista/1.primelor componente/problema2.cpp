//creare-afisare-subprogrm pentru stergerea primei componente daca aceasta contine
// val 0
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod *urm;
};

nod *p,*u;

void creare(nod* &p, nod* &u)
{
    nod* c;
    int n,i;
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

void listare(nod *p)
{
    nod *c;
    if (p == 0)
    {
        cout<<"Lista e vida";
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

void sterge_ultima0(nod* &p, nod* &u)
{
    nod *s;
    s = p;
    
    if (s->x == 0)
    {
        cout<<"Prima comp este 0 si va fi stearsa";
        delete s;
    }
    else
    {
        cout<<"Prima comp este "<<s->x<<" si nu va fi stearsa";

    }
}

int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    listare(p);
    cout<<endl;

    sterge_ultima0(p,u);
    cout<<endl;

    cout<<"lista dupa stergere:"<<endl;
    listare(p);



    return 0;
}