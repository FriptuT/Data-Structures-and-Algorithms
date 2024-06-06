// sterge componentele care contin valori egale cu 2
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod* urm;
};

nod *p,*u;

void creare(nod* &p, nod* &u)
{
    int n,i;
    nod *c;
    cout<<"Nr de elemente: ";cin>>n;
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

// sterge comp care contin valori egale cu 2
void sterge_doi(nod* &p, nod* &u)
{
    nod *s,*cs,*c;
    while (p != 0 && p->x == 2)
    {
        s = p;
        p = p->urm;
        delete s;
    }

    if (p == 0)
    {
        u = 0;
    }
    else
    {
        c = p;
        while (c)
        {
            if (c->x == 2)
            {
                s = c;
                cs->urm = c->urm;
                if (cs->urm == 0)
                {
                    u = cs;
                }
                c=c->urm;
                delete s;
            }
            else
            {
                cs = c;
                c = c->urm;
            }
        }
    }
}


int main()
{
    creare(p,u);
    cout<<"Lista este:"<<endl;
    listare(p);
    cout<<endl;

    sterge_doi(p,u);
    cout<<endl;

    cout<<"lista dupa stergere: "<<endl;
    listare(p);




    return 0;
}