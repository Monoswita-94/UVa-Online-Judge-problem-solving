
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int maxUniquePackage(vector<int>& snowflakes) {
    int n = snowflakes.size();
    set<int> package;
    int maxPackageSize = 0;

    for (int i = 0; i < n; i++) {
        while (package.count(snowflakes[i]) > 0) {
            package.erase(snowflakes[i - package.size()]);
        }
        package.insert(snowflakes[i]);
        maxPackageSize = max(maxPackageSize, static_cast<int>(package.size()));
    }

    return maxPackageSize;
}

int main() {
    int numTestCases;
    cin >> numTestCases;

    for (int t = 0; t < numTestCases; t++) {
        int n;
        cin >> n;
        vector<int> snowflakes(n);

        for (int i = 0; i < n; i++) {
            cin >> snowflakes[i];
        }

        int maxUnique = maxUniquePackage(snowflakes);
        cout << maxUnique << endl;
    }

    return 0;
}
