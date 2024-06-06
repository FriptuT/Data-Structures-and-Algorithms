#include <iostream>
using namespace std;

int n;

int TREPTE(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 2;

    return TREPTE(n-1) + TREPTE(n-2);
}

int main()
{
    cout<<"nr de trepte: ";cin>>n;
    
    cout<<TREPTE(n);

    return 0;
}