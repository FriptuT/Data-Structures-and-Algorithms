// creare
// afisare stanga dreapta
// intoarce prin "ok" rezultatul verificarii x1+x3 =par
#include <iostream>
using namespace std;

struct nod
{
    nod *as;
    int x;
    nod *ad;
};

nod *p, *u;
int ok;

void creare(nod *&p, nod *&u)
{
    int n;
    nod *c;
    cout << "nr de elemente:";
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

void listareStDr(nod *p)
{
    nod *c;
    c = p;
    while (c)
    {
        cout << c->x << " ";
        c = c->ad;
    }
}

void verifica_sumaPara(nod *p, int &ok)
{
    nod *c;
    c = p;
    ok = 0;
    if ((c->x + c->ad->ad->x) % 2 == 0)
    {
        ok = 1;
    }
}

int main()
{
    creare(p, u);
    cout << "lista este:" << endl;
    listareStDr(p);
    cout << endl;

    verifica_sumaPara(p, ok);

    if (ok == 1)
    {
        cout << "suma e para";
    }
    else
    {
        cout << "suma nu e para";
    }

    return 0;
}