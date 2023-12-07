// create a function which returns in parameter ok, the truth value: 
// the list is sorted in ascending order
#include <iostream>
#include <cstring>
using namespace std;

struct nod{
    nod*as;
    int x;
    nod*ad;
};

nod *p,*u;
int ok;


void create(nod *&p, nod *&u)
{
    int n;
    nod *c;
    cout << "nr de elemente este:"; cin >> n;
    c = new nod;
    cout<<"x=";cin>>c->x;
    c->ad = NULL;
    p = c;
    u = c;

    for (int i = 1; i <= n - 1; i++)
    {
        c = new nod;
        cout << "x=";
        cin >> c->x;
        c->ad = NULL;
        c->as = u;
        u->ad = c;
        u = c;
    }
}

void displayLR(nod *p)
{
    nod *c;
    c = p;
    while (c)
    {
        cout << c->x << " ";
        c = c->ad;
    }
}

void checkSorted(nod* p, int &ok)
{
    nod *c;
    c = p->ad;
    
    ok = 1;
    while (c)
    {
        if (!(c->as->x < c->x))
        {
            ok = 0;
        }
        c = c->ad;
    }
    
    if (ok == 1)
    {
        cout<<"sorted ascending";
    }
    else
    {
        cout<<"unsorted";
    }
}


int main()
{
    create(p,u);
    cout<<"the list:"<<endl;
    displayLR(p);
    cout<<endl;

    checkSorted(p,ok);



    return 0;
}