// read from keyboard a string of chars ,s and
// display lowercase vowels 3 on a line
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L,nr_afisare;

int  main(){
    cout<<"s: ";cin.getline(s,100);
    L = strlen(s);

    nr_afisare = 0;
    for (int i = 0; i <= L-1; i++)
    {
        if(strchr("aeiou", s[i])){
            nr_afisare++;
            cout<<s[i]<<" ";
            if (nr_afisare % 3 == 0)
            {
                cout<<endl;
            }
        }
    }
    

    return 0;
}