// chars 5 on a line
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L,nr_afisare;

int main()
{
    cout<<"s: ";cin.getline(s,100);
    L=strlen(s);

    nr_afisare = 0;
    for (int i = 0; i <= L-1; i++)
    {
        cout<<s[i]<<" ";
        nr_afisare++;
        if (nr_afisare % 5 == 0)
        {
            cout<<endl;
        }
        
    }
    


    return 0;
}