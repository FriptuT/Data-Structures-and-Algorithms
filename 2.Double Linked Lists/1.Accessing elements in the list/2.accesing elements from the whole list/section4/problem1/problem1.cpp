// verify if the list is sorted ascending (descending; constant) and returns the result
#include <iostream>
using namespace std;

struct nod
{
    nod *as;
    int x;
    nod *ad;
};

nod *p, *u;
int ok;

void create(nod *&p, nod *&u)
{
    int n;
    nod *c;
    cout << "nr of elements:";
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

int sorted_ascending(nod *p, int &ok)
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
    return ok;
}

int sorted_ascending2(nod *p, int &ok)
{
    nod *c;
    c = p;
    ok = 1;
    while (c->ad != u)
    {
        if (!(c->x < c->ad->x))
        {
            ok = 0;
        }
        c = c->ad;
    }
    return ok;
}

int sorted_descending(nod *p, int &ok)
{
    nod *c;
    c = p->ad;
    ok = 1;
    while (c)
    {
        if (!(c->as->x > c->x))
        {
            ok = 0;
        }
        c = c->ad;
    }
    return ok;
}
int sorted_descending2(nod *p, int &ok)
{
    nod *c;
    c=p;
    ok = 1;
    while (c->ad != u)
    {
        if (!(c->x > c->ad->x))
        {
            ok = 0;
        }
        c = c->ad;
    }
    return ok;
}

int list_constant(nod *p, int &ok)
{
    nod *c;
    c = p->ad;
    while (c)
    {
        if (!(c->as->x == c->x))
        {
            ok = 0;
        }
        c = c->ad;
    }
    return ok;
}

int list_constant2(nod *p, int &ok)
{
    nod *c;
    c = p;
    while (c->ad != u)
    {
        if (!(c->x == c->ad->x))
        {
            ok = 0;
        }
        c = c->ad;
    }
    return ok;
}

int main()
{
    create(p, u);
    cout << "the list:" << endl;
    printLR(p);
    cout << endl;

    sorted_ascending(p, ok);

    if (ok == 1)
    {
        cout << "sorted ascending";
    }
    else
    {
        cout << "unsorted";
    }

    return 0;
}