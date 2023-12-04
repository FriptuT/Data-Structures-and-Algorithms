// verify if third char is equal with last but one (al3-lea cu penultimul)
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout<<"s:";cin.getline(s,100);
    L = strlen(s);

    if (L >= 3)
    {
        if(s[2] == s[L-2])
        {
            cout<<"are equal";
        }
        else
        {
            cout<<"aren't equal";
        }
    }
    
    

    return 0;
}