#include <iostream>
using namespace std;

int n,a,b,c,i;

int main()
{
    cout<<"nr de secunde: ";cin>>n;

    a = 1;
    b = 1;
    c = 1;

    for (int i = 1; i <= n; i++)
    {
        b = b + a + 2*c;
        c = c + a + c;
        a = a + a;
    }
    

    cout<<a<<" "<<b<<" "<<c;



    
    return 0;
}