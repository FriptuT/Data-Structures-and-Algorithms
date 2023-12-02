// interchange the content of the two variables c1,c2 and print them
#include <iostream>
#include <string.h>
using namespace std;

char c1,c2,aux;

int main()
{
    cin>>c1;
    cin>>c2;

    //swap(c1,c2);
    //sau 

    aux = c1;
    c1 = c2;
    c2 = aux;


    cout<<c1<<" si "<<c2;



    return 0;
}