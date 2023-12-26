// create the list of odd elements from vector x
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;
int x[100],nx;

void create(int x[10],int nx,nod *&p, nod*&u)
{
    nod *c;
    int NRL = 0;
    for (int i = 1; i <= nx; i++)
    {
        if (x[i] % 2 == 0)
        {
            NRL++;
            if (NRL == 1)
            {
                c = new nod;
                c->x = x[i];
                c->ad = NULL;
                c->as = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = x[i];
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
    cout<<"nx=";cin>>nx;
    for (int i = 1; i <= nx; i++ )
    {
        cin>>x[i];
    }

    create(x,nx,p,u);
    cout<<"the list is:"<<endl;

    displayLR(p);




    return 0;
}