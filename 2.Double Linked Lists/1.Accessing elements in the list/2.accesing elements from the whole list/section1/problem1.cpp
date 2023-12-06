// create - dispalyLR and 
// prints components one on line
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;

void create(nod*&p, nod*&u)
{
    int n;
    nod*c;
    cout<<"nr de elem este:";cin>>n;
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


void printLR(nod*p)
{
    nod *c;
    c = p;
    while (c)
    {
        cout<<c->x<<endl;
        c=c->ad;
    }
    
}


int main()
{
    create(p,u);
    cout<<"the list:"<<endl;


    printLR(p);


    return 0;
}