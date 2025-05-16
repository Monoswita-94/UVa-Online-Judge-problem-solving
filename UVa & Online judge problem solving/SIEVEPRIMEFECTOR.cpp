#include <iostream>
using namespace std;

const int MAXN = 1000000;

void sievePrimeFactorization(int n) {
    int smallestPrime[MAXN + 1] = {0};

    // Calculate smallest prime factors using Sieve
    for (int i = 2; i <= MAXN; i++) {
        if (smallestPrime[i] == 0) {
            for (int j = i; j <= MAXN; j += i) {
                if (smallestPrime[j] == 0) {
                    smallestPrime[j] = i;
                }
            }
        }
    }

    cout << "Prime Factors: ";
    while (n > 1) {
        cout << smallestPrime[n] << " ";
        n /= smallestPrime[n];
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    sievePrimeFactorization(num);

    return 0;
}
