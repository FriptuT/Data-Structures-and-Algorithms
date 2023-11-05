// creare-afisare-functie pentru:
// stergerea primei componente, daca aceasta are valoarea egala cu a 2-a componenta
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod* urm;
};

nod *p,*u;


void creare(nod* &p,nod* &u)
{
    nod *c;
    int n,i;
    cout<<"nr de elem:";cin>>n;
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

void del_first_equal_second(nod* &p, nod* &u)
{
    nod *s;
    s = p;
    p = p->urm;
    if (s->x == p->x)
    {
        cout<<"Prima este egala cu a doua si se va sterge";
        delete s;
    }
    else
    {
        cout<<"Prima nu e egala cu a 2-a";
    }
}

int main()
{
    creare(p,u);
    cout<<"LISTA ESTE:"<<endl;
    listare(p);

    del_first_equal_second(p,u);
    cout<<endl;

    cout<<"lista dupa stergere:"<<endl;
    listare(p);



    return 0;
}