#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if two words have at most one mismatch
bool isOneMismatch(const string& word, const string& target) {
    int mismatchCount = 0;
    for (size_t i = 0; i < word.size(); i++) {
        if (word[i] != target[i]) {
            mismatchCount++;
            if (mismatchCount > 1) {
                return false;
            }
        }
    }
    return mismatchCount == 1;
}

// Function to get the numerical value of a word
int getNumericalValue(const string& word) {
    static const vector<string> numericalWords = {"one", "two", "three"};
    for (size_t i = 0; i < numericalWords.size(); i++) {
        if (word.size() == numericalWords[i].size() && isOneMismatch(word, numericalWords[i])) {
            return i + 1;
        }
    }
    return -1; // Word not recognized
}

int main() {
    int numWords;
    cin >> numWords;

    for (int i = 0; i < numWords; i++) {
        string word;
        cin >> word;

        int numericalValue = getNumericalValue(word);
        cout << numericalValue << endl;
    }

    return 0;
}

