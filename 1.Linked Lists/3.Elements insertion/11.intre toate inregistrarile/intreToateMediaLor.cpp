// insereaza intre toate inregistrarile media lor
#include <iostream>
using namespace std;

struct nod
{
    int x;
    nod *urm;
};

nod *p,*u;

void creare(nod *&p, nod *&u)
{
    int n;
    nod *c;
    cout << "nr de elemente: ";
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
        cout << "lista este:" << endl;
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

void intreToateMediaLor()
{
    nod *c,*t;

    c = p;
    while (c)
    {
        if (c->urm)
        {
            t = new nod;
            t->x = (c->x + c->urm->x)/2;
            t->urm = c->urm;
            c->urm = t;

            if (t->urm == 0)
            {
                u = t;
            }
            
            c=c->urm->urm;
        }
        else
        {
            c=c->urm;
        }
    }
}

int main()
{
    creare(p,u);
    cout<<"lista este:"<<endl;
    afisare(p);

    intreToateMediaLor();
    cout<<"afisare dupa inserare:"<<endl;

    afisare(p);

    return 0;
}