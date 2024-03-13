/*
    Un număr se numește “nice” dacă conține 69 ca subsecvență. 
    În alte cuvinte, dacă în numarul respectiv, 
    imediat după o cifra 6 se află o cifră 9, numărul respectiv este “nice”.

De exemplu, numărul 369420 este “nice”, pe când numărul 684920 nu este “nice”.

*/
#include <iostream>
using namespace std;

int main(){
    int el,cif,x,n,countNice;
    cout<<"n=";cin>>n;
    countNice = 0;
    for (int i = 1; i <= n; i++)
    {
        cout<<"x=";cin>>x;
        
        // 369420 
        el = x;
        while (el != 0)
        {
            cif = el % 100;
            if (cif == 69)
            {
                countNice++;
            }
            el /= 10;
        }
    }

    cout<<"numere nice : "<<countNice<<endl;
    


    return 0;
}