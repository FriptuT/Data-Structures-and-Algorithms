#include <iostream>
using namespace std;

int n;

int SCARI(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
    if (n == 2)
    {
        return 2;
    }
    
    return SCARI(n-1) + SCARI(n-2);
}

int main()
{
    cout<<"nr de scari= ";cin>>n;
    cout<<SCARI(n);


    return 0;
}