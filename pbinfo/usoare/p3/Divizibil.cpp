#include <iostream>
using namespace std;
int n, c1, c2, c3;

void div2(int c1, int c2, int n)
{
    int A = 0;
    for (int i = 1; i < n; i++)
    {
        if (c1 % i != 0 && c2 % i != 0)
        {
            A++;
        }
    }
    if (A == 1)
    {
        cout << A << " numar nu e div nici cu c1, nici cu c2" << endl;
    }
    else
    {
        cout << A << " numere nu sunt divizibile nici cu c1 nici cu c2" << endl;
    }
}

void div3(int c1, int c2, int c3, int n)
{
    int B = 0;
    for (int i = 1; i < n; i++)
    {
        if (c1 % i != 0 && c2 % i != 0 && c3 % i != 0)
        {
            B++;
        }
    }

    cout << B << " numere nu sunt divizibile nici cu c1, nici cu c2, nici cu c3" << endl;
}

int main()
{
    int t;
    cout << "t=";
    cin >> t;
    if (t == 1)
    {
        cout << "introdu 3 numere n,c1,c2: ";
        cin >> n >> c1 >> c2;
    }
    else
    {
        cout << "Introdu 4 numere, n,c1,c2,c3: ";
        cin >> n >> c1 >> c2 >> c3;
    }

    div2(c1, c2, n);
    // div3(c1,c2,c3,n);

    return 0;
}