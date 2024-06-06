// inserare dupa ultimul par
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
    int n;
    nod *c;
    cout << "n=";
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

void inserare_dupa_ultimulPar()
{
    nod *c, *q, *t;

    q = NULL;
    c = p;
    while (c)
    {
        if (c->x % 2 == 0)
        {
            q = c;
        }
        c = c->urm;
    }

    if (q)
    {
        t = new nod;
        cout << "t=";
        cin >> t->x;
        t->urm = q->urm;
        q->urm = t;

        if (!(t->urm))
        {
            u = t;
        }
    }
}

int main()
{
    creare(p, u);
    cout << "lista este:" << endl;
    afisare(p);

    inserare_dupa_ultimulPar();
    cout << endl;

    cout << "afisare dupa inserare:" << endl;
    afisare(p);

    return 0;
}