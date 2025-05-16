#include <iostream>
using namespace std;
int countSequences(int n) {
    if (n == 1) {
        return 2;
    }
    int a = 1, b = 2, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int scenarios;
    cin >> scenarios;

    for (int i = 1; i <= scenarios; i++) {
        int n;
        cin >> n;
        cout << "Scenario #" << i << ":" << endl;
        cout << countSequences(n) << endl;
        cout << endl;
    }

    return 0;
}
