#include <iostream>
#include <cmath>
using namespace std;
int getValue(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 1;
    } else if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 27;
    } else {
        return 0;
    }
}
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

int main() {
    string word;
    while (cin >> word) {
        int sum = 0;
        for (char &ch : word) {
            sum += getValue(ch);
        }
        if (isPrime(sum)) {
            cout << "It is a prime word." << endl;
        } else {
            cout << "It is not a prime word." << endl;
        }
    }
    return 0;
}
