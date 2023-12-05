// display the characters until the second lowercase vowel exclusive
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L, countVowels;

int main()
{
    cout << "s: ";
    cin.getline(s, 100);
    L = strlen(s);

    countVowels = 0;
    for (int i = 0; i <= L - 1; i++)
    {
        if(strchr("aeiou",s[i])){
            countVowels++;
            if (countVowels == 2)
            {
                // cout<<s[i];            // for inclusive 
                break;
            }
        }
        cout<<s[i];
    }
    

    return 0;
}