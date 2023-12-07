// read a string "s" and:
// print suffixes from large to short
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L1;

int main()
{
    cout<<"s:";cin.getline(s,100);
    L1 = strlen(s);

    // teodor
    for (int i = 0; i <= L1-1; i++)
    {
        for (int j = i; j <= L1-1; j++)
        {
            cout<<s[j];
        }
        cout<<endl;
    }
    


    return 0;
}