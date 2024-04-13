#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, arr[100],i,ratio,capacity;

struct Item{
    int value;
    int weight;
    int ratio;

    Item(int v, int w) : value(v), weight(w) {
        ratio = value / weight;
    }
};

bool functionCompareOfRatio(const Item &a, const Item &b){
    return a.ratio > b.ratio;
}

double obiecteRucsac(int capacity, vector<Item> arr, int n){
    // sortam obiecte dupa ratie
    sort(arr.begin(), arr.end(), functionCompareOfRatio);
    int currentWeight = 0;
    double finalValue = 0.0;  // valoarea finala din rucsac

    for (int i = 0; i < n; i++)
    {
        // daca adaugare unui element nu depaseste capacitatea, il adaugam intreg(complet/cu totul, fara sa-l fractionam)
        if (currentWeight + arr[i].weight <= capacity)
        {
            currentWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
        // daca nu putem adauga un obiect intreg, il fractionam adaugand o parte sau parti din acesta
        else
        {
            int remain = capacity - currentWeight;          // 20
            finalValue += arr[i].value * ((double) remain / arr[i].weight); // 120 * (20/30) = 
            break;
        }
    }

    return finalValue;
    
}

int main()
{
    cout<<"capacity=";cin>>capacity;
    cout<<"n=";cin>>n;

    vector<Item> obiecte = {
        Item(60,10),
        Item(100,20),
        Item(120, 30)
    };

    cout<<"Valoarea este : "<<obiecteRucsac(capacity,obiecte,n);

    



    return 0;
}