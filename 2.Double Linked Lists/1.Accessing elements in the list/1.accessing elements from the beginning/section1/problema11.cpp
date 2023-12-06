// create a function to return X(k1) + X(k1+1) + ... + X(k2)
// where k1,k2 are parameters
#include <iostream>
using namespace std;

struct node{
    node* as;
    int x;
    node* ad;
};

node *p,*u;
int k1,k2;

void create(node*&p,node*&u)
{
    int n,i;
    node *c;
    cout<<"nr de elemente este:";cin>>n;
    c = new node;
    cout<<"x=";cin>>c->x;
    c->ad = NULL;
    p = c;
    u = c;

    for (int i = 1; i <= n-1; i++)
    {
        c = new node;
        cout<<"x=";cin>>c->x;
        c->ad = NULL;
        c->as = u;
        u->ad = c;
        u = c;
    }
}

void displayLR(node *p)
{
    node *c;
    c=p;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->ad;
    }
}

int display(node *p, int k1,int k2)
{
    node *c;
    c = p;
    
    cout<<"k1=";cin>>k1;
    for (int i = 1; i <= k1-1; i++)
    {
        c = c->ad;                      // k1
    }


    cout<<"k2=";cin>>k2;
    for (int i = 1; i <= k2-1; i++)
    {
        p = p->ad;                      // k2
    }

    int s = 0;
    for (node* i = c; i <= p; i=i->ad)
    {
        s = s + i->x;
    }
    
    return s;

}


int main()
{   
    create(p,u);
    cout<<"lista este:"<<endl;
    displayLR(p);
    cout<<endl;

    cout<<display(p,k1,k2);


    return 0;
}