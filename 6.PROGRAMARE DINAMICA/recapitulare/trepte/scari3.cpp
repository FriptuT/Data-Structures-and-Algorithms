#include <iostream>
using namespace std;


int n, T1,T2,T,i;

int main()
{
    cout<<"n=";cin>>n;

    T1 = 1;
    T2 = 2;

    for (int i = 3; i <= n; i++)
    {
        T = T1 + T2;
        T1 = T2;
        T2 = T;
    }
    
    cout<<T;



    return 0;
}   