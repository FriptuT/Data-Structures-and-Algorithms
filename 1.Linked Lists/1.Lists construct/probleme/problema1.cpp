// Construieste lista cu cifrele pare ale lui n
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod* urm;
};

nod *p,*u;
int n;

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
            c=c->urm;
        }
    }
}

void CONSTRUCTIE(int n, nod* &p, nod* &u)
{
    nod *c;
    int nrl,el,cif;
    cout<<"n=";cin>>n;
    el = n;
    
    nrl = 0;
    while (el != 0)
    {
        cif = el % 10;
        if (cif % 2 == 0)
        {
            nrl++;
            if (nrl == 1)
            {
                c = new nod;
                c->x = cif;
                c->urm = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = cif;
                c->urm = NULL;
                u->urm = c;
                u = c;
            }
        }
        el = el / 10;
    }
}

int main()
{   

    CONSTRUCTIE(n,p,u);
    
    cout<<"Lista este:"<<endl;
    listare(p);



    return 0;
}