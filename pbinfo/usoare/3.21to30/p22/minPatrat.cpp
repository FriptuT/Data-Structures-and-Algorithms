/*
Se dă un număr natural n. 
Calculați pătratul celui mai mic divizor propriu al său.
*/
#include <iostream>
#include <limits.h>
using namespace std;

int n, d, el,minDiv;

int main()
{
    cout<<"n=";cin>>n;
    
    minDiv = INT_MAX;
    el = n;
    for ( d = 2; d <= el / 2; d++)
    {
        if (el % d == 0 && d < minDiv)
        {
            minDiv = d;
        }
    }
    
    cout<<"minimul: "<<minDiv<<endl;

    int patrat = minDiv*minDiv;
    
    cout<<"patratul celui mai mic divizor:"<<patrat;


    return 0;
}
