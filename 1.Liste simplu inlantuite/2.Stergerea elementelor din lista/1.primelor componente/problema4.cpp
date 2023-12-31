// creare-afisare-subprogram care sterge prima componenta
// daca urmatoarele 2 contin valori identice
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
    cout << "Nr de componente :";
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
        cout << "Lista este vida";
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

// sterge prima componenta
// daca urmatoarele 2 contin valori identice

void sterge_prima(nod *&p, nod *&u)
{
    nod* s;

    if (p->urm->x == p->urm->urm->x)
    {
        cout<<"urmatoarele 2 sunt identice, iar prima va fi stearsa"<<endl;
        s = p;
        p = p->urm;
        delete s;
    }
    else
    {
        cout<<"urmatoarele 2 nu sunt identice"<<endl;
    }
    
}

int main()
{
    creare(p, u);
    cout << "lista este:" << endl;
    afisare(p);
    cout<<endl;

    sterge_prima(p, u);

    cout << "Lista dupa stergerea primei:" << endl;
    afisare(p);

    return 0;
}