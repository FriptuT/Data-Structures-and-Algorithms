// afisati suma maxima care se poate obtine adunand elementele din tablou
// se pleaca din varf si se poate deplasa doar in jos sau in jos-diagonal
#include <iostream>
using namespace std;


int a[100][100],s[100][100],n,i,j;
int main()
{
    cout<<"n=";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin>>a[i][j];
        }
    }
    
    for (int j = 1; j <= n; j++)
    {
        s[n][j] = a[n][j];
    }
    
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (s[i+1][j] > s[i+1][j+1])
            {
                s[i][j] = a[i][j] + s[i+1][j];
            }
            else
            {
                s[i][j] = a[i][j] + s[i+1][j+1];
            }
        }
    }
    
    cout<<s[1][1];


    // DE EXPLICAT INCA O DATA LA MEDITATIE


    return 0;
}