// print the components with order number between k1 and k2(parameters)
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
int nr,k1,k2;

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

void numberOrder(int k1, int k2)
{
    nod *c;
    c = p;
    int orderNr = 0;

    cout << "k1=";
    cin >> k1;
    cout << "k2=";
    cin >> k2;

    while (c)
    {
        orderNr++;
        if (orderNr >= k1 && orderNr <= k2)
        {
            cout << c->x;
        }
        c = c->ad;
    }
}

int main()
{
    create(p,u);
    cout<<"the list: "<<endl;
    printLR(p);
    cout<<endl;

    numberOrder(k1,k2);


    return 0;
}