// returns sum of even values , starting from the third component
#include <iostream>
using namespace std;

struct nod{
    nod*as;
    int x;
    nod*ad;
};

nod *p,*u;
int s;

void create(nod*&p, nod*&u)
{
    int n;
    nod*c;
    cout<<"number of elements: ";cin>>n;
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

// returns sum of even values , starting from the third component

int evenSum(nod*p, int s)
{
    nod *c;
    c = p->ad->ad;
    s = 0;
    while (c)
    {
        if (c->x % 2 == 0)
        {
            s = s + c->x;
        }
        c=c->ad;
    }
    return s;
}


int main()
{
    create(p,u);
    cout<<"the list:"<<endl;
    printLR(p);

    cout<<evenSum(p,s);


    return 0;
}