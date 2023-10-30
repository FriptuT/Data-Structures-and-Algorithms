//construieste lista cu divizori de forma 3k ai lui n
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
        cout<<"Lista vida";
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

void CONSTRUCTIE(int n, nod* &p, nod* &u)
{
    nod *c;
    int el,d,nrl;
    cout<<"n=";cin>>n;

    el = n;
    nrl = 0;
    for (int d = 2; d <= el/2; d++)
    {
        if (el % d == 0 && d % 3 == 0)
        {
            nrl++;
            if (nrl == 1)
            {
                c = new nod;
                c->x = d;
                c->urm = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = d;
                c->urm = NULL;
                u->urm = c;
                u = c;
            }
        }
        
    }
    
}


int main()
{
    CONSTRUCTIE(n,p,u);
    cout<<"Lista este:"<<endl;

    listare(p);





    return 0;
}