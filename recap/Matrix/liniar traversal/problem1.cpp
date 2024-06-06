// calculate the sum of elements:
// a[0][3], a[2][3], ... , a[18][3]
#include <iostream>
using namespace std;


int a[100][100],sum,i,j,n;

int main()
{
    cout<<"n=";cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    
    sum = 0;
    for (int i = 0; i <= 4; i+=2)
    {
        sum += a[i][3];
    }
    cout<<sum<<endl;



    return 0;
}