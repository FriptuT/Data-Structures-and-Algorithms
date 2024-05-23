/*
    Cunoscand harta a N tari (relatiile de vecinatate), 
    sa se determine numarul minim de culori care  
    pot fi folosite pentru a colora tarile de pe harta 
    astfel incat doua tarii vecine sa nu aiba aceeasi culoare.    
*/
#include <iostream>
using namespace std;

int vecin[100][100],x[100],n,i;
int main(){
    cout<<"n=";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"vecin["<<i<<"]["<<j<<"]=";
            cin>>vecin[i][j];
            vecin[j][i] = vecin[i][j];
        }
    }
    vecin[i][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<vecin[i][j];
        }
        cout<<endl;
    }

    for (int i = 1; i <= n; i++)
    {
        x[i] = 1;
        for (int j = 1; j <= i-1; j++)
        {
            if (vecin[i][j] == 1 && x[j] == x[i])
            {
                x[i] = x[i] + 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout<<"Tara "<<i<<" in culoarea "<< x[i]<<endl;
    }
    
    


    return 0;
}