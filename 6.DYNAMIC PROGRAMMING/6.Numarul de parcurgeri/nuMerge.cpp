#include <iostream>
using namespace std;

// se considera o matrice patratica de marime n.
// parcurgerea matricei se poate face pe directiile:
// nord, nord-est si est
// Afisati numarul de moduri in care se poate ajunge din coltul
// (n,1)  in coltul (1,n)
// 1 2 3 4 
// 2 1 2 7
// 3 1 3 8
// 8 7 8 7
void CIT(int a[15][15], int n, int l, int c)
{
    if (l == n && c == n)
    {
        cin >> a[l][c];
    }
    else if (c <= n)
    {
        cin >> a[l][c];
        CIT(a, n, l, c + 1);
    }
    else
    {
        CIT(a, n, l + 1, 1);
    }
}
void AFIS(int a[15][15], int n, int l, int c)
{
    if (l == n && c == n)
    {
        cout<<a[l][c];
    }
    else if(c <= n)
    {
        cout<<a[l][c];
        AFIS(a,n,l,c+1);
    }
    else
    {
        AFIS(a,n,l+1,1);
    }
}

int nrModuriRecursiv(int memo[15][15], int n, int l, int c){
    
    if (l == 1 && c == n)
    {
        return 1;
    }

    if (memo[l][c] != -1)
    {
        return memo[l][c];
    }
    
    memo[l][c] = nrModuriRecursiv(memo,n,l-1,c)         // nord
                +nrModuriRecursiv(memo,n,l-11,c+1)       // nord-est
                +nrModuriRecursiv(memo,n,l,c+1);      // est
    
    return memo[l][c];
}

int main()
{
    // trebuie sa parcurgem de jos in sus si de la stanga la dreapta
    int a[15][15],n,memo[15][15];
    cout<<"n=";cin>>n;

    CIT(a,n,1,1);
    system("cls");
    AFIS(a,n,1,1);

    cout<<endl;

    cout<<nrModuriRecursiv(memo,n,n,1);



    return 0;
}