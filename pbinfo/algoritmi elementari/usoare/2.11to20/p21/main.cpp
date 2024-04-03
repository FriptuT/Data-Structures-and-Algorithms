/*
    Se dau n numere naturale. 
    Determinați cea mai mică bază de numerație b în care ar putea fi considerate aceste numere.
*/
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n,x,cif;
    int maximCif = INT_MIN;
    cout<<"n=";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"x=";cin>>x;
        
        while (x != 0)
        {
            cif = x % 10;
            if (cif > maximCif)
            {
                maximCif = cif;
            }
            x = x /10;
        }
        
    }
    
    cout<<"Baza minima de numeratie in care pot fi scrise aceste nr este : "<< maximCif + 1;





    return 0;
}