#include <iostream>
using namespace std;

int x[99], s[99], i, n, Smax, is, js, j;

int main()
{
    cout << "n=";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "x[" << i << "]=";
        cin >> x[i];
    }
    cout << endl;

    s[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        s[i] = s[i - 1] + x[i];
    }

    Smax = INT_MIN;
    is = 0;
    js = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (s[j] - s[i - 1] > Smax)
            {
                Smax = s[j] - s[i - 1];
                is = i;
                js = j;
            }
        }
    }

    cout << Smax << " " << endl;

    for (int k = is; k <= js; k++)
    {
        cout << x[k] << " ";
    }
    cout << endl;

    return 0;
}