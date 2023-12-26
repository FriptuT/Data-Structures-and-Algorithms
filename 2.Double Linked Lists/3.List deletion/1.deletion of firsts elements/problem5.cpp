// delete first 3 components
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;

void create(nod *&p, nod *&u){
    int n,i;
    nod *c;
    cout<<"nr of elements:";cin>>n;
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

void displayLR(nod *p)
{
    nod *c;
    if (p == 0)
    {
        cout<<"the list is vid";
    }
    else
    {
        c = p;
        while (c)
        {
            cout<<c->x<<" ";
            c=c->ad;
        }
    }
}

void deleteFirstThree(nod *&p)
{
    nod *s,*q,*r;
    s = p;
    q = p->ad;
    r = p->ad->ad;

    p = p->ad->ad->ad;
    delete s;
    delete q;
    delete r;
}

int main()
{
    create(p,u);
    cout<<"the list is:"<<endl;

    displayLR(p);
    cout<<endl;
    deleteFirstThree(p);

    displayLR(p);
    cout<<endl;

    return 0;
}