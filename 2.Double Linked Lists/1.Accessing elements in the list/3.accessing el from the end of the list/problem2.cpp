//return the sum of the last three values
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


void sumLastThree(nod *u){

    int s = 0;
    s = s + u->x + u->as->x + u->as->as->x;

    cout<<"the sum is: "<<s;
}

int main()
{
    create(p,u);
    cout<<"the list:"<<endl;
    printLR(p);
    cout<<endl;

    sumLastThree(u);


    return 0;
}