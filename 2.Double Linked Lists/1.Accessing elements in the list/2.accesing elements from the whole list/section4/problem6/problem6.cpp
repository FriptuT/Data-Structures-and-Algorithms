// put in variable(parameter) "k" the number of components 
//equal with the sum of the two neighbors from right side
#include <iostream>
using namespace std;

struct nod{
    nod*as;
    int x;
    nod*ad;
};

nod *p,*u;
int s,k;

void create(nod *&p, nod *&u)
{
    int n;
    nod *c;
    cout << "nr of elements: ";
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

void printLR(nod *p)
{
    nod *c;
    c = p;
    while (c)
    {
        cout << c->x << " ";
        c = c->ad;
    }
}

int sumTwoRight(nod *p, int &k, int &s)
{
    nod *c;
    c=p;
    k = 0;
    s = 0;
    while (c->ad != u)
    {
        s = c->ad->x + c->ad->ad->x;
        if (c->x == s)
        {
            k++;
        }
        c = c->ad;
    }
    return k;
}

int main()
{   
    create(p,u);
    cout<<"the list: "<<endl;
    printLR(p);
    cout<<endl;


    cout<<"nr of components: "<<endl;
    cout<<sumTwoRight(p,k,s);

    



    return 0;
}