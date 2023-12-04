// problem3 - contains exactly 6 char
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

    if (L == 6)
    {
        cout << "contains exactly 6 chars";
    }
    else if (L < 6)
    {
        cout << "contains less than 6 chars";
    }
    else
    {
        cout << "contains more than 6 chars";
    }

    return 0;
}