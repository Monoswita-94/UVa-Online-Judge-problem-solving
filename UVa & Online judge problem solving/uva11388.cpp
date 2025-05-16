#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
void solve(int t) {
    while (t--) {
        int g, l;
        cin >> g >> l;
        int a, b;
        if (l % g == 0) {
            b = l;
            a = g;
            cout << a << " " << b << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}
int main() {
    int t;
    cin >> t;

    solve(t);

    return 0;
}

