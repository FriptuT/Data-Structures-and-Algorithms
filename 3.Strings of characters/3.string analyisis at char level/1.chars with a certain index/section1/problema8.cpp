// last but one and before last are distinct lowercase letters
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main(){
    cout<<"s: ";cin.getline(s,100);
    L=strlen(s);

    if (islower(s[L-2]) && islower(s[L-3]) && (s[L-2] != s[L-3]))
    {   
        cout<<"distinct lowercase letters";
    }
    else
    {
        cout<<"false";
    }


    return 0;
}