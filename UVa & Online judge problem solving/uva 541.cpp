#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        int matrix[100][100];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        int row_sum[100], col_sum[100];
        memset(row_sum, 0, sizeof(row_sum));
        memset(col_sum, 0, sizeof(col_sum));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                row_sum[i] += matrix[i][j];
                col_sum[j] += matrix[i][j];
            }
        }
        int corrupt_count = 0;
        int corrupt_row = -1, corrupt_col = -1;
        for (int i = 0; i < n; i++) {
            if (row_sum[i] % 2 != 0) {
                corrupt_count++;
                corrupt_row = i + 1;
            }
            if (col_sum[i] % 2 != 0) {
                corrupt_count++;
                corrupt_col = i + 1;
            }
        }
        if (corrupt_count == 0) {
            cout << "OK" << endl;
        } else if (corrupt_count == 2) {
            cout << "Change bit (" << corrupt_row << "," << corrupt_col << ")" << endl;
        } else {
            cout << "Corrupt" << endl;
        }
    }
    return 0;
}
