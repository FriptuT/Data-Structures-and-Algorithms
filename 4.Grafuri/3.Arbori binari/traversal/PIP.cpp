#include <iostream>
#include <fstream>
using namespace std;

int n, rad, i, st[100], dr[100];

// preordine (RADACINA - STANGA - DREAPTA)
void RSD(int rad){
    cout<<rad<<" ";
    if (st[rad] != 0)
    {
        RSD(st[rad]);
    }

    if (dr[rad] != 0)
    {
        RSD(dr[rad]);
    }
}

// inordine ( STANGA - RADACINA - DREAPTA)
void SRD(int rad){
    if (st[rad] != 0)
    {
        SRD(st[rad]);
    }
    cout<<rad<<" ";

    if (dr[rad] != 0)
    {
        SRD(dr[rad]);
    }
}

// postordine ( STANGA - DREAPTA - RADACINA)
void SDR(int rad){
    if (st[rad] != 0)
    {
        SDR(st[rad]);
    }

    if (dr[rad] != 0)
    {
        SDR(dr[rad]);
    }
    cout<<rad<<" ";
}


int main()
{
    ifstream inFile("input.txt");

    inFile >> n >> rad;

    for ( i = 1; i <= n; i++)
    {
        inFile >> st[i] >> dr[i];
    }
    
    inFile.close();

    // PREORDINE ---
    cout<<"PREORDINE"<<endl;
    RSD(rad);
    cout<<endl;

    // INORDINE
    cout<<"INORDINE"<<endl;
    SRD(rad);
    cout<<endl;

    // POSTORDINE
    cout<<"POSTORDINE"<<endl;
    SDR(rad);
    cout<<endl;

    return 0;
}