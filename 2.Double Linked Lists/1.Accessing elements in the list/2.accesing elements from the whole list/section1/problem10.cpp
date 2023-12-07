// print according to the model:
// x1+x2+...+xn ( xn = last value )
#include <iostream>
#include <cstring>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;

void create(nod*&p,nod*&u)
{
    int n;
    nod *c;
    cout<<"number of elements : ";cin>>n;
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

void printModel()
{
    nod *c;
    c = p;

    cout<<c->x<<"+"<<c->ad->x<<"+...+"<<u->x;
}


int main()
{
    create(p,u);
    cout<<"the list:"<<endl;
    printLR(p);
    cout<<endl;

    printModel();



    return 0;
}