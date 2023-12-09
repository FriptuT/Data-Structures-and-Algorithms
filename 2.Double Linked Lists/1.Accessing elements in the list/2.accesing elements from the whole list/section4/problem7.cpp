// return the result of checking if exists components which are the average of
// the neighbors from left and right side
#include <iostream>
using namespace std;

struct nod{
    nod*as;
    int x;
    nod*ad;
};

nod *p,*u;
int ok,average;

void create(nod*&p,nod*&u)
{
    int n;
    nod *c;
    cout<<"nr of elements:";cin>>n;
    c= new nod;
    cout<<"x=";cin>>c->x;
    c->ad = NULL;
    c->as = NULL;
    p = c;
    u = c;

    for (int i = 1; i <= n-1; i++)
    {
        c = new nod;
        cout<<"x=";cin>>c->x;
        c->ad = NULL;
        c->as = u;
        u->ad = c;
        u = c;
    }
}

void printLR(nod *p)
{
    nod *c;
    c = p;
    while (c)
    {
        cout<<c->x<<" ";
        c=c->ad;    
    }
}

//if exists components which are the average of
// the neighbors from left and right side

void checkingAverage(nod *p, int &ok, int &average)
{
    nod *c;
    c = p->ad;
    average = 0;
    ok = 0;
    while (c != u)
    {
        average = (c->as->x + c->ad->x)/2;
        if (c->x == average)
        {
            ok = 1;
        }
        c = c->ad;
    }
    
    if (ok == 1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
} 

int main()
{   
    create(p,u);
    cout<<"the list: "<<endl;
    printLR(p);
    cout<<endl;

    checkingAverage(p,ok,average);



    return 0;
}