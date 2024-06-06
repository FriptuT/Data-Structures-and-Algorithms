// construieste lista cu elemente de forma 3k + 1  din [a,b)
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod* urm;
};

nod *p,*u;
int a,b;

void listare(nod* p)
{
    nod *c;
    if (p == 0)
    {
        cout<<"lista vida";
    }
    else
    {
        c=p;
        while (c)
        {
            cout<<c->x<<" ";
            c=c->urm;
        }
    }
}

void CONSTRUCTIE(int a, int b, nod* &p, nod* &u)
{
    nod *c;
    int nrl;

    nrl = 0;
    for (int i = a; i < b; i++)
    {
        if (i % 3 == 1)
        {
            nrl++;
            if (nrl == 1)
            {
                c = new nod;
                c->x = i;
                c->urm = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = i;
                c->urm = NULL;
                u->urm = c;
                u = c;
            }
        }
    }
}


int main()
{
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;

    CONSTRUCTIE(a,b,p,u);

    cout<<"Lista este:"<<endl;
    listare(p);





    return 0;
}