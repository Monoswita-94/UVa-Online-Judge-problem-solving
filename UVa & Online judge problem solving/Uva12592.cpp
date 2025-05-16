
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Ignore the newline character after N

    unordered_map<string, string> slogans;

    // Read and store the slogans in the unordered_map
    for (int i = 0; i < N; i++) {
        string firstLine, secondLine;
        getline(cin, firstLine);
        getline(cin, secondLine);
        slogans[firstLine] = secondLine;
    }

    int Q;
    cin >> Q;
    cin.ignore(); // Ignore the newline character after Q

    // Process the queries and print the corresponding second line
    for (int i = 0; i < Q; i++) {
        string query;
        getline(cin, query);

        cout << slogans[query] << endl;
    }

    return 0;
}
