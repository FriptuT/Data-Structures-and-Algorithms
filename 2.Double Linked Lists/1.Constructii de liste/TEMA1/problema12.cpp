// return through parameter "t" the value:
// t = X(s) * X(s) * ... * X(r)
// unde s si r sunt dati ca parametru
#include <iostream>
using namespace std;

struct node{
    node *as;
    int x;
    node *ad;
};

node *p,*u;
int s,r,t;

void create(node*&p, node*&u)
{
    int n;
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

void displayLR(node*p)
{
    node *c;
    c=p;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->ad;
    }
}

int display(node *p, int s, int r, int T)
{
    node* c;
    c = p;

    cout<<"s=";cin>>s;
    for (int i = 1; i <= s-1; i++)
    {
        c = c->ad;
    }

    cout<<"r=";cin>>r;
    for (int i = 1; i <= r-1; i++)
    {
        p = p->ad;
    }

    //Varianta pentru x(s) * x(s) * x(r);
    T = 1;
    T = T * c->x * c->x * p->x;
    return T;
}

int main()
{
    create(p,u);
    cout<<"list is: "<<endl;
    displayLR(p);
    cout<<endl;

    cout<<display(p,s,r,t);




    return 0;
}