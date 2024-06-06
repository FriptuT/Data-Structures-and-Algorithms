// insereaza elementul q inaintea primului par
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
        u = 0;
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

void inserare_inainteDePrimulPar()
{
    nod *c, *q;

    if (p->x % 2 == 0)
    {
        q = new nod;
        cout << "q=";
        cin >> q->x;
        q->urm = p;
        p = q;
    }
    else
    {
        c = p;
        while (c)
        {
            if ((c->urm) && (c->urm->x % 2 == 0))
            {
                break;
            }
            else
            {
                c = c->urm;
            }
        }
    }

    if (c)
    {
        q = new nod;
        cout<<"q=";cin>>q->x;
        q->urm = c->urm;
        c->urm = q;
    }
    
}

int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    afisare(p);
    cout<<endl;

    inserare_inainteDePrimulPar();
    cout<<endl;

    cout<<"afisare dupa inserare inainte de primul par:"<<endl;
    afisare(p);

    return 0;
}