// create a list, display it, and
// create a function that :
// returns the sum of even components from the second until last but one and with step 2
#include <iostream>
using namespace std;

struct nod
{
    nod *as;
    int x;
    nod *ad;
};

nod *p, *u;
int s;

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

void dispalyLR(nod *p)
{
    nod *c;
    c = p;
    while (c)
    {
        cout << c->x << " ";
        c = c->ad;
    }
}

// returns the sum of even components from the second until last but one and with step 2

int sumEven(nod *p, int s)
{
    nod *c;
    c = p->ad;
    s = 0;
    while (c->ad != u)
    {
        if (c->x % 2 == 0)
        {
            s = s + c->x;
        }
        c = c->ad->ad;
    }
    return s;
}

int main()
{
    create(p, u);
    cout << "the list : " << endl;
    dispalyLR(p);
    cout << endl;

    cout<<sumEven(p,s);

    return 0;
}