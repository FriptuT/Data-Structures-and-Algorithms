// print the reversed prefixes from small to big
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout<<"S:";cin.getline(s,100);
    L=strlen(s);

    for (int i = 0; i <= L-1; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout<<s[j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}