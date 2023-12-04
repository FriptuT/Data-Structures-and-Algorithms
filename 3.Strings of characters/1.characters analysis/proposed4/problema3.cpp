//considerand ca este litera mica, o transforma in litera mare
// consider that is a lower , transform it in upper
#include "iostream"
#include "string.h"
using namespace std;

char c;


int main()
{
    cin>>c;

    if (islower(c))
    {
        c = toupper(c);
    }
    
    cout<<c;

    return 0;
}