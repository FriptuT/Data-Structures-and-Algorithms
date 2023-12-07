// returns through parameter "ok" the truth value : at least a even value
#include <iostream>
#include <cstring>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;
int ok;

void create(nod* &p, nod*&u)
{
    int n;
    nod *c;
    cout<<"nr of elements is :";cin>>n;
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
    c=p;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->ad;
    }
}

void atLeastOneEven(int &ok)
{   
    nod *c;
    c = p;
    ok = 0;
    while (c)
    {
        if (c->x % 2 == 0)
        {
            ok = 1;
        }
        c = c->ad;
    }

    if (ok == 1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}       

int main()
{   
    create(p,u);
    cout<<"the list:"<<endl;
    printLR(p);

    atLeastOneEven(ok);


    return 0;
}