#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAXN = 1000000;

// Array to store the smallest prime factor for every number
int spf[MAXN + 1];

// Function to precompute the smallest prime factor (Sieve of Eratosthenes)
void sieve() {
    for (int i = 1; i <= MAXN; i++) {
        spf[i] = i; // Initialize each number as its own smallest prime factor
    }

    for (int i = 2; i * i <= MAXN; i++) {
        if (spf[i] == i) { // i is prime
            for (int j = i * i; j <= MAXN; j += i) {
                if (spf[j] == j) {
                    spf[j] = i; // Update the smallest prime factor
                }
            }
        }
    }
}

// Function to calculate the number of different prime factors
int countPrimeFactors(int n) {
    int count = 0;
    int lastFactor = 0;

    while (n > 1) {
        int currentFactor = spf[n];
        if (currentFactor != lastFactor) {
            count++;
            lastFactor = currentFactor;
        }
        n /= currentFactor;
    }
    return count;
}

int main() {
    // Precompute the smallest prime factors
    sieve();

    int num;
    while (cin >> num && num != 0) {
        int result = countPrimeFactors(num);
        cout << num << " : " << result << endl;
    }

    return 0;
}
