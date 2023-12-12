// returns, through parameter "ok", the result of checking if:
// last_but_one = last
#include <iostream>
using namespace std;


struct nod{
    nod*as;
    int x;
    nod*ad;
};

nod *p,*u;

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

// returns, through parameter "ok", the result of checking if:
// last_but_one = last

void checkingLast(nod *u)
{
    nod *c;
    int ok;
    c = u;

    ok = 0;
    if (c->as->x == c->x)
    {
        ok = 1;
    }
    
    if (ok == 1)
    {
        cout<<"are equal";
    }
    else
    {
        cout<<"aren't equal";
    }
}


int main()
{
    create(p,u);
    cout<<"the list: "<<endl;
    printLR(p);
    cout<<endl;

    checkingLast(u);



    return 0;
}