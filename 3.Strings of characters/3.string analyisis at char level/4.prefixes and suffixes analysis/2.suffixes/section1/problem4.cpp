// count suffixes that starts with digit
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout<<"s:";cin.getline(s,100);
    L = strlen(s);

    int nr = 0;
    for (int i = 0; i <= L-1; i++)
    {
        if (isdigit(s[i]))
        {
            nr++;
            for (int j = i; j <= L-1; j++)
            {
                cout<<s[j];
            }
        }
        cout<<endl;
    }
    
    cout<<"nr de sufixe care incep cu a : "<<nr;


    return 0;
}