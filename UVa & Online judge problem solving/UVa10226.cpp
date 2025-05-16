#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline character after T

    for (int t = 0; t < T; t++) {
        if (t > 0) {
            cout << endl; // Output a blank line between consecutive test cases
        }

        map<string, int> speciesCount;
        string species;

        int totalTrees = 0;
        while (getline(cin, species) && !species.empty()) {
            speciesCount[species]++;
            totalTrees++;
        }

        vector<pair<string, int>> speciesPercentage;

        // Calculate the percentage of each species and store in a vector
        for (const auto& entry : speciesCount) {
            speciesPercentage.push_back({entry.first, (entry.second * 100) / totalTrees});
        }

        // Sort the species names in alphabetical order
        sort(speciesPercentage.begin(), speciesPercentage.end());

        // Output the result for the current test case
        for (const auto& entry : speciesPercentage) {
            cout << entry.first << " " << fixed << setprecision(4) << static_cast<double>(entry.second) << endl;
        }
    }

    return 0;
}
