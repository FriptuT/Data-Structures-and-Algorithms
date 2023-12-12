// returns through param "ok" the result of :
// u > u->as->as
#include <iostream>
using namespace std;

struct nod{
    nod*as;
    int x;
    nod*ad;
};

nod *p,*u;
int ok;

void create(nod *&p, nod *&u)
{
    int n;
    nod *c;
    cout<<"nr of components:";cin>>n;
    c = new nod;
    cout<<"x=";cin>>c->x;
    c->ad = NULL;
    c->as = NULL;
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

void printLR(nod *p)
{
    nod *c;
    c = p;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->ad;    
    }
}


// returns through param "ok" the result of :
// last > penultimate
void lastGreater(nod *u, int &ok)
{
    ok = 0;
    if (u->x > u->as->as->x)
    {
        ok = 1;
    }
    
    if (ok == 1)
    {
        cout<<"last greater";
    }
    else
    {
        cout<<"penultimate greater";
    }
    
}


int main()
{
    create(p,u);
    cout<<"the list:"<<endl;
    printLR(p);

    lastGreater(u,ok);



    
    return 0;
}