//sterge componentele care contin valori egale cu valoarea celei de a3-a componenta
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
    cout << "nr de componente:";
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
        cout << "lista este vida:" << endl;
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

//sterge componentele care contin valori egale cu valoarea celei de a3-a componenta
void stergeEgaleCuTreia(nod *&p, nod *&u)
{
    nod *c, *s, *cs;
    int val = p->urm->urm->x;

    while (p != 0 && p->x == val)
    {
        s = p;
        p = p->urm;
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
}

int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    afisare(p);

    stergeEgaleCuTreia(p,u);
    cout<<endl;

    cout<<"afisare dupa stergere:"<<endl;
    afisare(p);

    return 0;
}