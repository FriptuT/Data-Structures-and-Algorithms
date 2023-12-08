// print the sums: x1 + x2  x2+x3  x3+x4 ... (2 metode)
#include <iostream>
#include <cstring>
using namespace std;

struct nod
{
    nod *as;
    int x;
    nod *ad;
};

nod *p, *u;
int nr, s;

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

// print the sums: x1 + x2  x2+x3  x3+x4 ... (2 metode)

void print_sums(nod *p, int s)
{
    nod *c;
    c = p->ad;
    while (c)
    {
        cout << c->as->x << "+" << c->x << " ";
        c = c->ad;
    }
}

// return the number of components equal with the sum of neighbors from left and right
int numberEqualWithSum(nod *p, int &nr, int &s)
{
    nod *c;
    c = p->ad;
    nr = 0;
    s = 0;
    while (c->ad != u)
    {
        s = c->as->x + c->ad->x;
        if (c->x == s)
        {
            nr++;
        }
        c = c->ad;
    }
    return nr;
}

int main()
{
    create(p, u);
    cout << "the list:" << endl;
    printLR(p);
    cout << endl;

    // print_sums(p,s);
    cout << numberEqualWithSum(p, nr,s);

    return 0;
}