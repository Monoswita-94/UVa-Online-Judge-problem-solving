#include<iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int N;
    while (cin >> N) {
        int relativelyPrimeTriples = 0;
        int notPartOfTripleCount = 0;
        for (int z = 1; z <= N; z++) {
            for (int y = 1; y < z; y++) {
                for (int x = 1; x < y; x++) {
                    if (x * x + y * y == z * z) {
                        if (gcd(gcd(x, y), z) == 1) {
                            relativelyPrimeTriples++;
                        }
                    }
                }
            }
        }
        for (int p = 1; p <= N; p++) {
            bool found = false;
            for (int z = 1; z <= N && !found; z++) {
                for (int y = 1; y < z && !found; y++) {
                    for (int x = 1; x < y; x++) {
                        if (x * x + y * y == z * z) {
                            if (x == p || y == p || z == p) {
                                found = true;
                                break;
                            }
                        }
                    }
                }
            }
            if (!found) {
                notPartOfTripleCount++;
            }
        }
        cout << relativelyPrimeTriples << " " << notPartOfTripleCount << endl;
    }
    return 0;
}
