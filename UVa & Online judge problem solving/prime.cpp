#include <iostream>
using namespace std;

const int MAXN = 1000000; // Maximum limit for prime number calculation

void sieveOfEratosthenes(int n) {
    bool isPrime[MAXN + 1]; // Array to mark numbers as prime or not
    int primes[MAXN]; // Array to store prime numbers
    int primeCount = 0; // Count of prime numbers found

    // Initialize isPrime array with true
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false; // Mark multiples of p as not prime
            }
        }
    }

    // Store prime numbers in the 'primes' array
    for (int p = 2; p <= n; p++) {
        if (isPrime[p]) {
            primes[primeCount] = p;
            primeCount++;
        }
    }

    // Print the prime numbers
    cout << "Prime numbers up to " << n << ": ";
    for (int i = 0; i < primeCount; i++) {
        cout << primes[i] << " ";
    }
    cout << endl;
}

int main() {
    int limit;
    cout << "Enter a limit: ";
    cin >> limit;

    sieveOfEratosthenes(limit);

    return 0;
}
