/* 
Se citește un număr natural n. 
Să se determine suma divizorilor săi.
*/

#include <iostream>
using namespace std;


int n, d,el,sumaDivizori;

int main(){

    cout<<"n=";cin>>n;
    
    el = n;
    sumaDivizori = 0;
    for ( d = 2; d < el / 2; d++)
    {
        if (el % d == 0)
        {
            cout<<d<<" ";
            sumaDivizori += d;
        }
    }
    
    cout<<endl;
    cout<<sumaDivizori;

    return 0;
}