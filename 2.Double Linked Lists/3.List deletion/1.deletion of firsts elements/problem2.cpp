// delete the first component if this has value of zero
#include <iostream>
using namespace std;

struct nod
{
    nod *as;
    int x;
    nod *ad;
};

nod *p, *u;

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
    c->as = NULL;
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

void displayLR(nod *&p)
{
    nod *c;
    if (p == 0)
    {
        cout << "the list is vid:" << endl;
    }
    else
    {
        c = p;
        while (c)
        {
            cout << c->x << " ";
            c = c->ad;
        }
    }
}

void deleteFirst(nod *&p)
{
    nod *s;
    if (p->x == 0)
    {
        s = p;

        p = p->ad;
        delete s;
    }
}

int main()
{
    create(p, u);
    cout << "the list is:" << endl;

    displayLR(p);

    deleteFirst(p);
    cout << endl;

    displayLR(p);

    return 0;
}