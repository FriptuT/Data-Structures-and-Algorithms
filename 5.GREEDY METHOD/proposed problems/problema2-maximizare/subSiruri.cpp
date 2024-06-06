/*
    Se dau n numere intregi nenule b1,b2,...bn
    Si m numere intregi nenule a1,a2,...am.
    Sa se determine un subsir al sirului b1,b2,...bn care sa maximizeze valoarea
    expresiei:
    E = a1 * x1 + a2 * x2 + ... + aK * xK

    n > m
    x[i] apartine {b1,b2, ...,  bn} , b[i] > 0 
*/
#include <iostream>
using namespace std;


int main()
{
    int n , m, x[100],a[100];
    cout<<"n=";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>x[i];
    }
    cout<<"m=";cin>>m;
    for (int i = 1; i <= m; i++)
    {
        cin>>a[i];
    }
    cout<<endl;

    //sortare sir a prin interschimbare
    int aux;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if (x[i] < x[j])
            {
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }

    // sortare sir b prin interschimbare
    int temp;
    for (int i = 1; i <= m - 1; i++)
    {
        for (int j = i+1; j <= m; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // calculam expresia E
    int E = 0;
    for (int i = 1; i <= n; i++)
    {
        E = E + a[i] * x[i];
    }
    
    cout<<"E = "<<E;


    return 0;   
}