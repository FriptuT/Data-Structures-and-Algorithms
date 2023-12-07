// print the reversed prefixes from big to small , 3 on row
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout << "s:";
    cin.getline(s, 100);
    L = strlen(s);

    int nr = 0;
    for (int i = L - 1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << s[j] << " ";
        }
        cout << " | ";
        nr++;
        if (nr == 3)
        {
            cout << endl;
        }
    }

    return 0;
}