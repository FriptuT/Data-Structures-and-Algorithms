// create a program that reads variable c and
// test if it is upper vowel
#include "iostream"
#include "string.h"
using namespace std;

char c;
int main()
{
    cout<<"c=";cin>>c;

    if (strchr("AEIOU",c))
    {
        cout<<"it is an upper vowel";
    }
    else
    {
        cout<<"it isn't an upper vowel";
    }



    return 0;
}