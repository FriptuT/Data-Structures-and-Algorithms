// inserare dupa toate pare
#include <iostream>
using namespace std;

struct nod{
    int x;
    nod *urm;
};

nod *p,*u;

void creare(nod *&p, nod*&u){
    int n;
    nod *c;
    cout<<"nr de elemente: ";cin>>n;
    c = new nod;
    cout<<"x=";cin>>c->x;
    c->urm = NULL;
    p = c;
    u = c;

    for (int i = 1; i <= n-1; i++)
    {
        c = new nod;
        cout<<"x=";cin>>c->x;
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
        cout<<"lista este:"<<endl;
    }
    else
    {
        c = p;
        while (c)
        {
            cout<<c->x<<" ";
            c=c->urm;    
        }
    }
}

void inserareDupaToatePare()
{
    nod *c,*t;

    c = p;
    while (c)
    {
        if (c->x % 2 == 0)
        {
            t = new nod;
            cout<<"t=";cin>>t->x;
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

int main(){
    creare(p,u);
    cout<<"lista este:"<<endl;
    afisare(p);
    cout<<endl;

    inserareDupaToatePare();
    cout<<"afisare dupa inserare:"<<endl;

    afisare(p);


    return 0;
}