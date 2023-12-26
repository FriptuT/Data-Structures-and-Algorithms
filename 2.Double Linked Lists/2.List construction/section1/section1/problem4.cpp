// create the list with even elements from the matrix NxN
#include <iostream>
using namespace std;

struct nod{
    nod *prev;
    int x;
    nod *next;
};

int nz, a[100][100];
nod *p,*u;

void create(int a[100][100], int nz, nod*&p, nod*&u)
{
    int n,NRL;
    nod *c;
    NRL = 0;
    for (int i = 1; i <= nz; i++)
    {
        for (int j = 1; j <= nz; j++)
        {
            if (a[i][j] % 2 == 1)
            {
                NRL++;
                if (NRL == 1)
                {
                    c = new nod;
                    c->x = a[i][j];
                    c->next = NULL;
                    c->prev = NULL;
                    p = c;
                    u = c;
                }
                else
                {
                    c = new nod;
                    c->x = a[i][j];
                    c->next = NULL;
                    c->prev = u;
                    u->next = c;
                    u = c;
                }
            }
        }
    }
}

void displayLR(nod *p){
    nod *c;
    if (p == 0)
    {
        cout<<"the list is null";
    }
    else
    {
        c = p;
        while (c)
        {
            cout<<c->x<<" ";
            c=c->next;
        }
    }
}



int main()
{
    cout<<"nz=";cin>>nz;
    for (int i = 1; i <= nz; i++)
    {
        for (int j = 1; j <= nz; j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<endl;

    create(a,nz,p,u);
    displayLR(p);



    return 0;
}