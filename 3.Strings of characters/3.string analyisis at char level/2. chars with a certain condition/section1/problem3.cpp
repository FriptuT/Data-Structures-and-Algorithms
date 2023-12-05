// display after the blueprint:
// s = "ab2abcd3ab1a0", display:
// ab
// abcd
// ab
// a
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main()
{
    cout << "s: ";
    cin.getline(s, 100);
    L = strlen(s);

    
    // int i = 0;
    // while (i <= L-1)
    // {
    //     if (!isdigit(s[i]))
    //     {
    //         cout<<s[i];
    //     }
    //     else
    //     {
    //         cout<<endl;
    //     }
        
    //     i++;
    // }

    // SECOND VARIANT with FOR
    for (int i = 0; i <= L-1; i++)
    {
        if (!isdigit(s[i]))
        {
            cout<<s[i];
        }
        else
        {
            cout<<endl;
        }
    }
    
    

    return 0;
}