#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore(); // To ignore the newline after the number of test cases

    while (test_cases--) {
        string text;
        getline(cin, text);

        // Create a vector to store the frequency of each letter
        vector<int> freq(26, 0);

        // Count the frequency of each letter (ignoring case)
        for (char c : text) {
            if (isalpha(c)) {
                freq[tolower(c) - 'a']++;
            }
        }

        // Find the maximum frequency
        int max_freq = *max_element(freq.begin(), freq.end());

        // Collect all letters with the maximum frequency
        string result;
        for (int i = 0; i < 26; i++) {
            if (freq[i] == max_freq) {
                result += (char)('a' + i);
            }
        }

        // Output the result
        cout << result << endl;
    }

    return 0;
}

