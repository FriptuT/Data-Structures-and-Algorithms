// starts with uppercase vowel
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout << "s: ";
    cin.getline(s, 100);

    L = strlen(s);

    if (L > 1)
    {
        if (strchr("AEIOU", s[0]))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}