// verify if contains elements equal with :
// double of neighbor from left + triple of neighbor from right
// c = c->as *2 + c->ad *3
#include <iostream>
using namespace std;

struct nod
{
    nod *as;
    int x;
    nod *ad;
};

nod *p, *u;
int s, ok;

void create(nod *&p, nod *&u)
{
    int n;
    nod *c;
    cout << "nr of elements: ";
    cin >> n;
    c = new nod;
    cout << "x=";
    cin >> c->x;
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

void printLR(nod *p)
{
    nod *c;
    c = p;
    while (c)
    {
        cout << c->x << " ";
        c = c->ad;
    }
}

// double of neighbor from left + triple of neighbor from right

int sumNeighbors(nod *p, nod *u, int &ok)
{
    nod *c;
    c = p->ad;

    ok = 0;
    int s = 0;
    while (c->ad != NULL)
    {
        s = (2 * c->as->x) + (2 * c->ad->x);
        if (c->x == s)
        {
            ok = 1;
        }
        c = c->ad;
    }
    return ok;
}

int main()
{
    create(p, u);
    cout << "the list: " << endl;
    printLR(p);

    sumNeighbors(p,u,ok);

    if (ok)
    {
        cout << "contains";
    }
    else
    {
        cout << "no";
    }

    return 0;
}