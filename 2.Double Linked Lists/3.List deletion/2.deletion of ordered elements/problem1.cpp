// delete the component with number k (k as a parameter)
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;
int k;

void create(nod *&p, nod*&u)
{
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

void displayLR(nod *&p)
{
    nod *c;
    if (p == 0)
    {
        cout<<"the list is vid"<<endl;
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

void deleteTheK(nod *&p, nod *&u, int k){
    nod *c,*s,*cs;

    if (k == 1)
    {
        s = p;
        p = p->ad;
        delete s;
    }
    else
    {
        c = p;
        for (int i = 1; i <= k-1; i++)
        {
            c = c->ad;
        }
        s = c;
        c->as->ad = c->ad;
        
        delete s;
    }
    
}


int main()
{
    create(p,u);
    cout<<"the list is:"<<endl;

    displayLR(p);
    cout<<endl;
    cout<<"k=";cin>>k;
    
    deleteTheK(p,u,k);
    cout<<endl;

    displayLR(p);



    return 0;
}