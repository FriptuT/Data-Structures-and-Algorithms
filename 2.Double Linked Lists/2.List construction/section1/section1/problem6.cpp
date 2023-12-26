// create the list with elements of form 4k+1 from the first natural numbers
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;
int nz;

void create(int nz,nod *&p, nod*&u){
    nod *c;
    int NRL = 0;
    for (int i = 0; i <= nz; i++)
    {
        if (i % 4 == 1)
        {
            NRL++;
            if (NRL == 1)
            {
                c = new nod;
                c->x = i;
                c->ad = NULL;
                c->as = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = i;
                c->ad = NULL;
                c->as = u;
                u->ad = c;
                u = c;
            }
        }
    }
}

void displayLR(nod *p){
    nod *c;
    if (p == 0)
    {
        cout<<"the list is:"<<endl;
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
    cout<<"nz=";cin>>nz;
    create(nz,p,u);
    cout<<"the list is:"<<endl;

    displayLR(p);

    return 0;
}