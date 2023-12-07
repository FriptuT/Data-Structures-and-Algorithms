// returns in parameter Pr ,the produce of components with number of order different from variables a and b
#include <iostream>
using namespace std;

struct nod
{
    nod *as;
    int x;
    nod *ad;
};

nod *p, *u;
int Pr, a, b;

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

int produceComponents(int a, int b, int &Pr)
{
    nod *c;
    c = p;
    int orderNumber = 0;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    Pr = 1;
    while (c)
    {
        orderNumber++;
        if (orderNumber != a && orderNumber != b)
        {
            Pr = Pr * c->x;
        }
        c = c->ad;
    }
    return Pr;
}

int main()
{
    create(p, u);
    cout << "the list:" << endl;
    printLR(p);
    cout << endl;

    cout << produceComponents(a, b, Pr);

    return 0;
}