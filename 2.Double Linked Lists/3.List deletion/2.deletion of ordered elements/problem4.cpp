// delete the component number 4 if it has a value equal with the first
// component's value
#include <iostream>
using namespace std;

struct nod{
    nod *as;
    int x;
    nod *ad;
};

nod *p,*u;


void create(nod *&p, nod *&u)
{
    int n;
    nod *c;
    cout << "nr of elements:";
    cin >> n;
    c = new nod;
    cout << "x=";
    cin >> c->x;
    c->ad = NULL;
    c->as = NULL;
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

void displayLR(nod *&p)
{
    nod *c;
    if (p == 0)
    {
        cout << "the list is vid:" << endl;
    }
    else
    {
        c = p;
        while (c)
        {
            cout << c->x << " ";
            c = c->ad;
        }
    }
}

void deleteTheFourth(nod *&p, nod *&u){
    nod *c,*s;
    c = p;
    int nr;
    nr = 0;
    while (c)
    {
        nr++;
        if (nr == 4 && c->x == p->x)
        {
            s = c;
            c->as->ad = c->ad;
            c=c->ad;
            delete s;
        }
        else
        {
            c=c->ad;
        }
    }
}


int main()
{
    create(p,u);
    cout<<"the list is: "<<endl;

    displayLR(p);
    cout<<endl;

    deleteTheFourth(p,u);
    cout<<endl;

    displayLR(p);




    return 0;
}