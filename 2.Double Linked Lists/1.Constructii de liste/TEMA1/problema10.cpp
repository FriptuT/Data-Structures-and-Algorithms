// create a function to display after the blueprint: 
// x1 = x2 = ... = Xk unde k este parametru
#include <iostream>
#include <cstring>
using namespace std;

struct node
{
    node* as;
    int x;
    node* ad;
};

node *p,*u;
int k;

void create(node*&p, node*&u){
    int n,i;
    node*c;
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

void dispalyLR(node *p)
{
    node *c;
    c = p;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->ad;
    }
}

void display(int k){
    node *c;
    c = p;

    cout<<"k=";cin>>k;

    for (int i = 1; i <= k-1; i++)
    {
        c = c->ad;
    }
    
    if (c->x)
    {
        cout<<p->x<<"="<<p->ad->x<<"=...="<<c->x;
    }
   
    
}

int main()
{
    create(p,u);
    cout<<"lista este:"<<endl;
    dispalyLR(p);

    display(k);




    return 0;
}