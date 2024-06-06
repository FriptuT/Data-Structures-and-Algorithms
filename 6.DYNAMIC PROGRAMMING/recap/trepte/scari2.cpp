// metoda cu vector

#include <iostream>
using namespace std;

int n, T[100],i;

int main()
{
    cout<<"n=";cin>>n;
    T[1] = 1;
    T[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        T[i] = T[i-1] + T[i-2];
    }
    
    cout<<T[n];



    return 0;
}   