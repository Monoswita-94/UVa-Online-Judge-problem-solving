#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

const int MAXN = 1000000; // Limit for sieve
vector<bool> isPrime(MAXN + 1, true);
vector<int> primes;

// Function to generate prime numbers using Sieve of Eratosthenes
void sieve() {
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime
    for (int i = 2; i <= MAXN; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

// Function to find the largest prime divisor of a number
ll largestPrimeDivisor(ll n) {
    ll largest = -1;
    int primeCount = 0;

    if (n < 0) n = -n; // Work with positive values

    for (int prime : primes) {
        if (prime * prime > n) break;

        // Check if `prime` divides `n`
        if (n % prime == 0) {
            primeCount++;
            largest = prime;
            while (n % prime == 0) {
                n /= prime;
            }
        }
    }

    // If `n` is still greater than 1, it must be prime
    if (n > 1) {
        largest = n;
        primeCount++;
    }

    // Return -1 if there isn't more than one prime divisor
    return (primeCount > 1) ? largest : -1;
}

int main() {
    sieve(); // Generate primes

    ll n;
    while (cin >> n && n != 0) {
        cout << largestPrimeDivisor(n) << endl;
    }

    return 0;
}

