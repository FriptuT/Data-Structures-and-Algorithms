#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    int n, buff[100],z;

    inFile >> n;
    z = 0;
    for (int i = 1; i < n; i++)
    {
        buff[z++] = n % i;
        
    }

    //aflam maximul dintre resturi
    int max = 0;
    for (int j = 0; j < z; j++)
    {
        if (buff[j] > max)
        {
            max = buff[j];
        }
    }
    
    //aflam suma resturilor
    int suma = 0;
    for (int j = 0; j < z; j++)
    {
        suma += buff[j];
    }

    outFile<<"Maximul dintre resturi: "<<max<<endl;
    outFile<<"Suma resturilor: "<<suma<<endl;

    inFile.close();
    outFile.close();
    

    return 0;
}