// print suffixes from short to long , with whitespace between them
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout<<"s:";cin.getline(s,100);
    L = strlen(s);

    for (int i = L-1; i >= 0; i--)
    {
        for (int j = i; j <= L-1; j++)
        {
            cout<<s[j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}