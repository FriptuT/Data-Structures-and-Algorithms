// display reversed characters
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int  main()
{
    cout<<"s:";cin.getline(s,100);
    L = strlen(s);

    for (int i = L-1; i >= 0; i--)
    {
        cout<<s[i]<<" ";
    }
    


    return 0;
}