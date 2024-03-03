#include <iostream>
#include <cmath>
using namespace std;

bool esteNorocos(int n) {
    int square = n * n;
    int start = sqrt(square) - n / 2;
    int sum = 0;
    
    for (int i = start; i < start + n; ++i) {
        sum += i;
    }
    
    return sum == square;
}

void afiseazaConsecutive(int n) {
    int square = n * n;
    int start = sqrt(square) - n / 2;
    
    for (int i = start; i < start + n; ++i) {
        cout << i;
        if (i < start + n - 1) {
            cout << " + ";
        }
    }
    cout << " = " << square << endl;
}

int main() {
    int n;
    cout << "Introduceți un număr natural n: ";
    cin >> n;
    
    if (esteNorocos(n)) {
        cout << "Numarul " << n << " este norocos.\n";
        cout << "Cele " << n << " numere consecutive care adunate dau patratul lui " << n << " sunt: ";
        afiseazaConsecutive(n);
    } else {
        cout << "Numarul " << n << " nu este norocos.\n";
    }

    
    return 0;
}
