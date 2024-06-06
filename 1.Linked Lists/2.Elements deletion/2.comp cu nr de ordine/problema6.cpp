//sterge comp cu nr de ordine :3 (divizibil cu 3)
#include <iostream>
using namespace std;

struct nod
{
    int x;
    nod *urm;
};

nod *p, *u;

void creare(nod *&p, nod *&u)
{
    int n, i;
    nod *c;
    cout << "Nr de componente este: ";
    cin >> n;
    c = new nod;
    cout << "x=";
    cin >> c->x;
    c->urm = NULL;
    p = c;
    u = c;

    for (int i = 1; i <= n - 1; i++)
    {
        c = new nod;
        cout << "x=";
        cin >> c->x;
        c->urm = NULL;
        u->urm = c;
        u = c;
    }
}

void afisare(nod *p)
{
    nod *c;
    if (p == 0)
    {
        cout << "lista vida";
    }
    else
    {
        c = p;
        while (c)
        {
            cout << c->x << " ";
            c = c->urm;
        }
    }
}

//sterge comp cu nr de ordine :3 (divizibil cu 3)

void sterge_diviz3(nod *&p, nod *&u)
{
    nod *cs, *s, *c;
    int nr;

    nr = 0;
    c = p;
    while (c)
    {
        nr++;
        if (nr % 3 == 0)
        {
            s = c;
            cs->urm = c->urm;
            c = c->urm;
            delete s;
        }
        else
        {
            cs = c;
            c = c->urm;
        }
    }
}

int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    afisare(p);
    cout<<endl;

    sterge_diviz3(p,u);
    cout<<endl;

    afisare(p);

    return 0;
}