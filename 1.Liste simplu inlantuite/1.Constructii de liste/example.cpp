// Realizati un program care folosind un subprogram de constructie,
// construieste lista elementelor pare din sirul x cu n elemente
#include <iostream>
#include <stdlib.h>
using namespace std;

struct nod{
    int x;
    nod* urm;
};

nod *p,*u;
int n,x[100];

void listare(nod* p){
    nod *c;
    if (p == 0)
    {
        cout<<"Lista este vida";
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

void CONSTRUCTIE(int x[10], int n, nod* &p, nod* &u)
{
    nod *c; 
    int nrl;

    nrl = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x[i] % 2 == 0)
        {
            nrl++;
            if (nrl == 1)
            {
                c = new nod;
                c->x = x[i];
                c->urm = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = x[i];
                c->urm = NULL;
                u->urm = c;
                u = c;
            }
        }
    }
}

int main()
{
    cout<<"n=";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>x[i];
    }
    system("cls");

    CONSTRUCTIE(x,n,p,u);

    cout<<"Lista este:"<<endl;
    listare(p);
    



    return 0;
}