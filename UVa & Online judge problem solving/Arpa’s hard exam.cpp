#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Determine the last digit of 1378^n
    if (n == 0) {
        // Any number to the power 0 is 1
        cout << 1 << endl;
    } else {
        // Determine position in the cycle
        int cycle[] = {8, 4, 2, 6};
        int lastDigit = cycle[(n - 1) % 4]; // Adjust index for 0-based array
        cout << lastDigit << endl;
    }

    return 0;
}

