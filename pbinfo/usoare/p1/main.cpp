#include <iostream>
using namespace std;

int S, n;
int main()
{
    cin >> n;
    S = 0;
    for (int i = 1; i <= n; i++)
    {
        S += 2*i;
    }
    cout <<"Suma este "<<S;

    return 0;
}