// print suffixes from long to short, one on row
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout<<"s:";cin.getline(s,100);
    L = strlen(s);

    for (int i = 0; i <= L-1; i++)
    {
        for (int j = i; j <= L-1; j++)
        {
            cout<<s[j]<<" ";
        }
    cout<<endl;
    }
    

    return 0;
}