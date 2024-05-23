#include <iostream>
#include <vector>

using namespace std;

int numWaysToClimb(int n) {
    // Verificăm cazurile de bază
    if (n == 0) return 1;
    if (n == 1) return 1;
    
    // Inițializăm un vector pentru a stoca numărul de moduri de a ajunge la fiecare treaptă
    vector<int> dp(n + 1);
    
    // Setăm condițiile inițiale
    dp[0] = 1;
    dp[1] = 1;
    
    // Calculăm numărul de moduri pentru fiecare treaptă de la 2 la n
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    
    return dp[n];
}

int main() {
    int n = 5;
    cout << "Numarul de moduri de a urca o scara cu " << n << " trepte este " << numWaysToClimb(n) << endl;
    return 0;
}
