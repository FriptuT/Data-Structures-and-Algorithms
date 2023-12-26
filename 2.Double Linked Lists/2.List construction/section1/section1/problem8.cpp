// construct the list with elements > 6 from A.txt
#include <iostream>
#include <fstream>
using namespace std;


struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;

void create(nod *&p, nod*&u)
{
    nod *c;
    int x,NRL;
    NRL = 0;
    ifstream fin("A.txt");
    while (fin>>x)
    {
        if (x > 6)
        {
            NRL++;
            if (NRL == 1)
            {
                c = new nod;
                c->x = x;
                c->ad = NULL;
                c->as = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = x;
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
        cout<<"the list vid"<<endl;
    }
    else
    {
        c=p;
        while (c)
        {
            cout<<c->x<<" ";
            c=c->ad;
        }
    }
}


int main()
{
    create(p,u);
    cout<<"the list is:"<<endl;


    displayLR(p);



    return 0;
}