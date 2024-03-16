/*
După numeroase aventuri, Harap Alb, însoțit de gașca de prieteni adunați de pe drum 
(Gerilă, Flămânzilă, Setilă, Ochilă și Păsări-Lăţi-Lungilă) ajung la împăratul Roș, 
având ca target fata acestuia. Acolo primesc mai multe challenge-uri, pe care 
le rezolvă cu o dexteritate specifică unor gamer-i cu experiență, dar 
povestea evită să prezinte ultimul challenge, care le-a pus probleme serioase.

Se pare că fata împăratului Roș i-a dat lui Harap Alb un număr natural 
cu cel puțin două cifre și i-a cerut să determine cel mai mare număr scris 
cu două cifre vecine din numărul dat. Harap Alb a întrebat calul, 
dar acesta nu știa răspunsul, apoi a întrebat-o pe Sfânta Miercuri, 
nici ea nu știa, așa că vă întreabă pe voi!
*/
#include <iostream>
using namespace std;



int n,el,cif,nrMax,cif2;
int main()
{
    cout<<"numar=";cin>>n;
    el = n;
    nrMax = -1;
    int inv = 0;
    while (el != 0)
    {
        int numar2Cifre = el % 100;
        if (numar2Cifre > nrMax)
        {
            nrMax = numar2Cifre;
            
        }
        el = el /10;
    }
    
    


    return 0;
}