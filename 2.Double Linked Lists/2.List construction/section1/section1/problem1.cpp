// create the list with odd digits of number n
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;
int n;


void create(int n, nod*&p, nod*&u)
{
    nod *c;
    int el,cif,NRL;
    el = n;
    NRL=0;
    while (el)
    {
        cif = el % 10;
        if (cif % 2 == 0)
        {
            NRL++;
            if (NRL == 1)
            {
                c = new nod;
                c->x = cif;
                c->ad = NULL;
                c->as = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = cif;
                c->ad = NULL;
                c->as = u;
                u->ad = c;
                u = c;
            }
        }
        el = el/10;
    }
}

void displayLR(nod *p)
{
    nod *c;
    if (p == 0)
    {
        cout<<"the list is vid";
    }
    else
    {
        c = u;
        while (c)
        {
            cout<<c->x<<" ";
            c=c->as;
        }
    }
}

int main()
{
    
    cout<<"n=";cin>>n;
    create(n,p,u);
    cout<<"the list is: "<<endl;

    displayLR(p);


    return 0;
}