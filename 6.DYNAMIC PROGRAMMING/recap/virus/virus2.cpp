#include <iostream>
using namespace std;


int main()
{
    int a,b,c,n;

    cout<<"nr de secunde: ";cin>>n;

    a = 1;
    b = 1;
    c = 1;

    // a 
//    /|\
//   a b c
//               b,c 
//              /   \
//             c    b,b

    for (int i = 1; i <= n ; i++)
    {
        b = b + a + 2*c;
        c = c + a + c;
        a = a + a;
    }
    
    cout<<a<<" "<<b<<" "<<c;


    return 0;
}