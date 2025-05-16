#include <iostream>
using namespace std;
int main() {
    int counter;
    cin >> counter;
    while (counter--) {
        int N, P;
        cin >> N >> P;
        int hartals[100];
        for (int i = 0; i < P; i++) {
            cin >> hartals[i];
        }
        int lostDays = 0;
        for (int i = 1; i <= N; i++) {
            if (i % 7 != 6 && i % 7 != 0) {
                bool isHartal = false;
                for (int j = 0; j < P; j++) {
                    if (i % hartals[j] == 0) {
                        isHartal = true;
                        break;
                    }
                }
                if (isHartal) {
                    lostDays++;
                }
            }
        }
        cout << lostDays << endl;
    }
    return 0;
}

