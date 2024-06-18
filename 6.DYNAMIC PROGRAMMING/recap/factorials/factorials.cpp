// C(n,k) = (n!)/[k!(n-k)!]
#include <iostream>
using namespace std;

int f[10000],m,a,b,c,d;

int main()
{
    f[0] = 1;
    for(int i = 1; i <= 20; i++){
        f[i] = f[i-1] * i;
    }

    cin>>m>>a>>b>>c>>d;

    int s = 0;
    s = f[m]/(f[a] * f[m-a]) + f[m]/(f[b] * f[m-b]) + f[m]/(f[c] * f[m-c]) + f[m]/(f[d] * f[m-d]);

    cout<<"suma este:"<<s;

    return 0;
}