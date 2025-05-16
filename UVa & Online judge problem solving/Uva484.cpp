#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> occurrences;
    int num;

    // Read integers from the input sequence
    while (cin >> num) {
        occurrences[num]++;
    }

    // Print the ordered pairs
    for (const auto& entry : occurrences) {
        cout << entry.first << " " << entry.second << endl;
    }

    return 0;
}
