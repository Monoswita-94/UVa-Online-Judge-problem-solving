#include <iostream>
#include <vector> // To use dynamic arrays (vectors)
using namespace std;

void primeFactorization(int n) {
    vector<int> factors; // Dynamic array to store factors

    // Find and store all prime factors of n
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i); // Store factor
            n /= i;
        }
    }

    // If n is greater than 1, it's a prime number and a factor
    if (n > 1) {
        factors.push_back(n);
    }

    // Print the prime factors
    cout << "Prime Factors: ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 0;
    }

    primeFactorization(num);

    return 0;
}
