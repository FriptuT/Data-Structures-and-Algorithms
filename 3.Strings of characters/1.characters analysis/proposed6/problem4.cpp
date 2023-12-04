// print "a=b=c=...=z"
#include "iostream"
#include "string.h"
using namespace std;

int main()
{

    for (char i = 'a'; i <= 'z'; i++)
    {
        cout << i;

        if (i != 'z')
        {
            cout << "=";
        }
    }

    return 0;
}