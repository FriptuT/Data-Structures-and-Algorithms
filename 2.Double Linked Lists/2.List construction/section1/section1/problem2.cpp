// create the list with the n's divisors with the form of "3k";
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;
int d,el,n;

void create(int n, nod*&p, nod*&u)
{
    nod *c;
    int el,NRL,d;
    el = n;
    NRL=0;
    for (int d = 2; d <= el/2; d++)
    {
        if (el % d == 0 && d % 3  == 0)
        {
            NRL++;
            if (NRL == 1)
            {
                c = new nod;
                c->x = d;
                c->ad = NULL;
                c->as = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = d;
                c->ad = NULL;
                c->as = u;
                u->ad = c;
                u = c;
            }
        }
        
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
        c = p;
        while (c)
        {
            cout<<c->x<<" ";
            c=c->ad;
        }
    
    }
}

int main()
{
    cout<<"n=";cin>>n;

    create(n,p,u);
    cout<<"the list is:"<<endl;

    displayLR(p);




    return 0;
}   