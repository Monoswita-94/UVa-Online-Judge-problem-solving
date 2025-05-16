#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int testCase = 1; testCase <= T; testCase++) {
        vector<int> salaries(3);
        for (int i = 0; i < 3; i++) {
            cin >> salaries[i];
        }

        // Sort the salaries in ascending order
        sort(salaries.begin(), salaries.end());

        // Output the case number and the salary of the person who survives
        cout << "Case " << testCase << ": " << salaries[1] << endl;
    }

    return 0;
}
