// print big letters ASCII CODE
#include "iostream"
#include "string.h"
using namespace std;

int code;

int main()
{
    for (char i = 'A'; i <= 'Z'; i++)
    {
        code = i;
        cout<<code<<" ";
    }

    return 0;
}