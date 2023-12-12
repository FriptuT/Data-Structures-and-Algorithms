// print the last 3 components reversed
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

// print the last 3 components reversed

void LastThreeReversed(nod *u)
{
    // cout<<u->x<<","<<u->as->x<<","<<u->as->as->x;

    nod *c;
    c = u;
    while (c->as->as != p)
    {
        c=c->as;
    }
    
    // cout<<c->x<<c->ad->x<<c->ad->ad->x<<" "<<endl;
    // cout<<c->ad->ad->x<<c->ad->x<<c->x<<" ";

    // normal
    // for (nod* i = c; i <= u; i=i->ad)
    // {
    //     cout<<i->x<<" ";
    // }
    cout<<endl;

    //reversed
    for (nod* i = u; i >= c; i=i->as)
    {
        cout<<i->x<<" ";
    }

}


int main()
{
    create(p,u);
    cout<<"The list:"<<endl;
    printLR(p);

    cout<<endl;
    LastThreeReversed(u);



    return 0;
}