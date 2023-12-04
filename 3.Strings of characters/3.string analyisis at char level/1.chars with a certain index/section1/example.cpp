// read from keyboard a string of chars, s and
// verify if the third it's equal with first
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

    if (L < 3)
    {
        cout << "we can not verify because the string has less than 3 characters";
    }
    else if (s[2] == s[0])
    {
        cout << "the third and the second are equal";
    }
    else
    {
        cout<<"they are not equal";
    }

    return 0;
}