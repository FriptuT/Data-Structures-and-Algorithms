// verify if contains at least 3 digits preceded by uppercase vowel
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L,nr,ok;

int main(){
    cout<<"s: ";cin.getline(s,100);
    L=strlen(s);

    nr = 0;
    ok = 0;
    for (int i = 0; i <= L-1; i++)
    {
        if (isdigit(s[i]))
        {
            nr++;
            if (nr >= 3 && (strchr("AEIOU",s[i-3])))
            {
                ok = 1;
            }
        }
    }

    if (ok == 1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    

    return 0;
}