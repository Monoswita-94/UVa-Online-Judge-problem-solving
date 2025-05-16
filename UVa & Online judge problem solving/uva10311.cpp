#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
bool checkGoldbachConjecture(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            cout << n << " is the sum of " << i << " and " << n - i << "." << endl;
            return true;
        }
    }
    cout << n << " is not the sum of two primes!" << endl;
    return false;
}

int main() {
    int n;
    while (cin >> n) {
        if (n % 2 == 0) {
            checkGoldbachConjecture(n);
        } else {
            cout << n << " is not the sum of two primes!" << endl;
        }
    }
    return 0;
}

