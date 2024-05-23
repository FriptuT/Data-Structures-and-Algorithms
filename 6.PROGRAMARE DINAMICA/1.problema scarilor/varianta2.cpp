#include <iostream>
using namespace std;

int n, SCARI[100],i;


int main()
{
    cout<<"nr de scari=";cin>>n;

    SCARI[1] = 1;
    SCARI[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        SCARI[i] = SCARI[i-1] + SCARI[i-2];
    }
    
    cout<<SCARI[n];



    return 0;
}       