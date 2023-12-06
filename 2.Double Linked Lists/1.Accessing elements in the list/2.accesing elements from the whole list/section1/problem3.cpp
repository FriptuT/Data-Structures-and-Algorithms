// create, print list and:
// returns ,through "ok" parameter , the truth value : all components even
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;  
    nod *ad;
};

nod *p,*u;
int ok;

void create(nod*&p, nod*&u)
{
    int n;
    nod *c;
    cout<<"number of elements : ";cin>>n;
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

// returns ,through "ok" parameter , the truth value : all components even


void allEven(nod *p, int &ok)
{
    nod *c;
    c = p;
    ok = 1;
    while (c)
    {
        if (!(c->x % 2 == 0))
        {
            ok = 0;
        }
        c=c->ad;
    }
    
    if (ok == 1)
    {
        cout<<"all even";
    }
    else
    {
        cout<<"not all even";
    }
}

int main()
{
    create(p,u);
    cout<<"the list:"<<endl;
    printLR(p);

    allEven(p,ok);



    return 0;
}
