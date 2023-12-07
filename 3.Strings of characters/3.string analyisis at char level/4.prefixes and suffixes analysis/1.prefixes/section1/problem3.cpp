// print prefixes that ends in 'a', with whitespaces between them
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout<<"s: ";cin.getline(s,100);
    L=strlen(s);

    for (int i = L-1; i >= 0; i--)
    {
        if (s[i] == 'a')
        {
            for (int j = 0; j <= i; j++)
            {
                cout<<s[j];
            }
        }
        cout<<" ";
    }
    



    return 0;
}