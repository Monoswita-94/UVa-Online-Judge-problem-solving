#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

// Function to generate prime numbers up to `n` using the Sieve of Eratosthenes
vector<int> generatePrimes(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return primes;
}

// Function to get the centered prime list
vector<int> getCenteredPrimes(const vector<int>& primes, int c) {
    int size = primes.size();
    int center = size / 2;

    // Determine the range of primes to return
    int start, end;
    if (size % 2 == 0) {
        start = max(0, center - c);
        end = min(size, center + c);
    } else {
        start = max(0, center - c + 1);
        end = min(size, center + c);
    }

    return vector<int>(primes.begin() + start, primes.begin() + end);
}

int main() {
    int n, c;

    while (cin >> n >> c) {
        vector<int> primes = generatePrimes(n);
        vector<int> centeredPrimes = getCenteredPrimes(primes, c);

        // Print the output
        cout << n << " " << c << ":";
        for (int prime : centeredPrimes) {
            cout << " " << prime;
        }
        cout << "\n\n"; // Blank line after each output
    }

    return 0;
}

