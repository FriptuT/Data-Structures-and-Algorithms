// sume cu factoriale
// [Combinari de n luate cate k] = n! / ( k! * (n-k)! )
// 0! = 1
// n! = (n-1)! * n
#include <iostream>
using namespace std;

int factorial[10000];
int m,a,b,c,d,Sum;
int main()
{
    factorial[0] = 1;
    
    for (int i = 1; i <= 20; i++)
    {
        factorial[i] = factorial[i-1] * i;
    }
    
    cout<<"m: ";cin>>m;
    cout<<"a: ";cin>>a;
    cout<<"b: ";cin>>b;
    cout<<"c: ";cin>>c;
    cout<<"d: ";cin>>d;
    cout<<endl;

    Sum = 0;
    
    Sum = factorial[m] / (factorial[a] * factorial[m-a])
        + factorial[m] /(factorial[b] * factorial[m-b])
        + factorial[m] /(factorial[c] * factorial[m-c])
        + factorial[m] /(factorial[d] * factorial[m-d]);

    
    cout<<"Suma este: "<<Sum<<endl;




    return 0;
}