// verify if contains only digits
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L,ok;

int main()
{
    cout<<"s: ";cin.getline(s,100);
    L=strlen(s);

    ok = 1;                             // presupunem ca sunt numai cifre
    for (int i = 0; i <= L-1; i++)
    {
        if (!isdigit(s[i]))
        {
            ok = 0;                         //daca unul din caractere nu este cifra , returnam false
        }
    }
    
    if (ok == 1)
    {
        cout<<"contine numai cifre";
    }
    else
    {
        cout<<"nu contine doar cifre";
    }
    



    return 0;
}