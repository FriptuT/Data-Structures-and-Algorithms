/*
Se consideră un şir s format din numere întregi. 
Să se determine numărul de termeni ai şirului 
obţinut prin eliminarea din cele două extremităţi ale lui s 
a unui număr minim de termeni, astfel încât şirul rezultat să înceapă şi să se termine cu câte un număr par.
*/
#include <iostream>
#include <fstream>
using namespace std;


int x[100],n,count,i,j,t;

int main(){
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    inFile >> n;
    for (int i = 1; i <= n; i++)
    {
        inFile >> x[i];
    }
    

    // 7 -22 -13 10 31 41 -6 2 101 83

    i = 1;
    j = n;
    count = 0;      // contor pt nr eliminate
    while (i <= j)
    {
        if (x[i] % 2 != 0 && x[j] % 2 != 0)
        {
            i++;
            j--;
            count += 2;
        }
        else if(x[i] % 2 == 0 && x[j] % 2 != 0){
            j--;
            count++;
        }
        else if(x[i] % 2 != 0 && x[j] % 2 == 0){
            i++;
            count++;
        }
        else
        {
            break;
        }
    }

    outFile<<"rezultat: "<<n - count;

    inFile.close();
    outFile.close();

    return 0;
}