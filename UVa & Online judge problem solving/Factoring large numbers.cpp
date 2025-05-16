#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to perform trial division for factorization
vector<long long> factorize(long long n) {
    vector<long long> factors;
    long long limit = sqrt(n);

    // Check divisibility by 2
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    // Check divisibility by odd numbers
    for (long long i = 3; i <= limit; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
        limit = sqrt(n); // Update the limit after reducing n
    }

    // If n is still a prime number greater than 2
    if (n > 2) {
        factors.push_back(n);
    }

    return factors;
}

// Function to print factors in the desired format
void printFactors(const vector<long long>& factors) {
    for (long long factor : factors) {
        cout << "    " << factor << endl; // 4 leading spaces
    }
    cout << endl; // Blank line after factors
}

int main() {
    string input;
    while (true) {
        getline(cin, input); // Read input as a string
        long long num = stoll(input); // Convert string to long long

        if (num < 0) {
            break; // End input on negative number
        }

        vector<long long> factors = factorize(num);
        printFactors(factors);
    }

    return 0;
}

