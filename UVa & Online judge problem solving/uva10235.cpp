#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int reverseNumber(int n) {
    int reversed = 0;
    while(n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int N;
    while (cin >> N) {
        cout << N << " ";
        if (!isPrime(N)) {
            cout << "is not prime." << endl;
        } else {
            int reversedN = reverseNumber(N);
            if (N != reversedN && isPrime(reversedN)) {
                cout << "is emirp." << endl;
            } else {
                cout << "is prime." << endl;
            }
        }
    }
    return 0;
}

