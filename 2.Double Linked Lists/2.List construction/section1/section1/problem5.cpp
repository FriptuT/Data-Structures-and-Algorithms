// create the list with elements of form 3k+1 from interval [a,b)
#include <iostream>
using namespace std;

struct nod{
    nod *left;
    int x;
    nod *right;
};

nod *p,*u;
int a,b;

void create(int a , int b, nod *&p, nod*&u){
    int n,NRL;
    nod *c;
    NRL=0;
    for (int i = a; i < b; i++)
    {
        if (i % 3 == 1)
        {
            NRL++;
            if (NRL == 1)
            {
                c = new nod;
                c->x = i;
                c->right = NULL;
                c->left = NULL;
                p = c;
                u = c;
            }
            else
            {
                c = new nod;
                c->x = i;
                c->right = NULL;
                c->left = u;
                u->right = c;
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
        cout<<"the list is null:"<<endl;
    }
    else
    {
        c = p;
        while (c)
        {
            cout<<c->x<<" ";
            c=c->right;
        }
    }
}

int main()
{
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;

    create(a,b,p,u);
    cout<<"the list is:"<<endl;


    displayLR(p);




    return 0;
}