// sterge comp care contin valori egale cu valoarea primei componente
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
    cout << "nr de elemente:";
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
        cout << "lista vida:" << endl;
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

// sterge comp care contin valori egale cu valoarea primei componente
void sterge_egale_cuPrima(nod *&p, nod *&u)
{
    nod *cs, *c, *s;
    int val;
    val = p->x;
    while (p != 0 && p->x == val)
    {
        s = p;
        p=p->urm;
        delete s;
    }

    if (p == 0)
    {
        u = 0;
    }
    else
    {
        c = p;
        while (c)
        {
            if (c->x == val)
            {
                s = c;
                cs->urm = c->urm;
                if (cs->urm == 0)
                {
                    u = cs;
                }
                c=c->urm;
                delete s;
            }
            else
            {
                cs = c;
                c=c->urm;
            }
        }
        
    }
    
}


int main()
{
    creare(p, u);
    cout << "lista este:" << endl;
    afisare(p);
    cout << endl;

    sterge_egale_cuPrima(p, u);
    cout << endl;

    cout << "afisare dupa stergere:" << endl;
    afisare(p);

    return 0;
}