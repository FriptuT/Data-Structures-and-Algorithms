// Se dă un vector cu n elemente, numere naturale.
// Afișați în ordine crescătoare valorile prime din vector.
// plan: sortam elementele, dupa care , elementele prime le bagam intr-un vector
// si in final sortam vectorul de prime daca este nevoie
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int numar)
{
    if (numar <= 1)
    {
        return false;
    }

    for (int d = 2; d <= numar / 2; d++)
    {
        if (numar % d == 0)
        {
            return false;
        }
    }
    return true;
}

void printSortedPrimes(vector<int> &vec)
{
    vector<int> primes;
    for(int num : vec){
        if(isPrime(num)){
            primes.push_back(num);
        }
    }   
    sort(primes.begin(), primes.end());
    for(int prime: primes){
        cout<<prime<<" ";
    }
    cout<<endl;
}

int main()
{   
    int n;
    cout<<"nr elemente = ";cin>>n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    
    printSortedPrimes(vec);


    return 0;
}