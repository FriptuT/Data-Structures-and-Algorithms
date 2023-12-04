// read from keyboard a string of characters and
// verify if contains at least 3 characters
#include <iostream>
#include <cstring>
using namespace std;

char s[100];
int L;

int main(){
    cout<<"s: ";cin.getline(s,100);
    
    L = strlen(s);
    if (L >= 3)
    {
        cout<<"contains";
    }
    else
    {
        cout<<"doesn't contain";
    }



    return 0;
}