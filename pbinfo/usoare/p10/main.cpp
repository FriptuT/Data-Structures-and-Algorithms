/*
    Se considera n numere și o cifră nenulă k. 
    Să se calculeze suma cifrelor numerelor dintre cele n 
    citite care incep cu cifra k.
*/
#include <iostream>
using namespace std;

int n, k,s,x;
int main()
{
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        cout<<"x=";cin>>x;
        int el = x;
        while (el > 10)
        {
            el /= 10;
        }
        
        if (el == k)
        {
            while (x != 0)
            {
                int cif = x % 10;
                s += cif;
                x /= 10;
            }
        }
    }

    cout<<"suma numerelor cu prima cifra "<<k<<" = "<<s;
    



    return 0;
}