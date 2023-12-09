// returns the number of components equal with the sum of two neighbors from left side
#include <iostream>
using namespace std;

struct nod{
    nod*as;
    int x;
    nod*ad;
};

nod *p,*u;
int nr,s;

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

// 2 3 5 8 13
int sumTwoLeft(nod *p, int &nr, int &s)
{
    nod *c;
    c = p->ad->ad;
    s = 0;
    nr = 0;
    while (c)
    {
        s = c->as->as->x + c->as->x;
        if (c->x == s)
        {
            nr++;
        }
        c=c->ad;
    }
    return nr;
}

int main()
{
    create(p,u);
    cout<<"the list:"<<endl;
    printLR(p);
    cout<<endl;

    sumTwoLeft(p,nr,s);

    cout<<"nr de componente este: "<<nr;



    return 0;
}