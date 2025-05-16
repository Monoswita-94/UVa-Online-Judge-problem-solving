#include <bits/stdc++.h>
using namespace std;

// Function to sort the string based
// on their ASCII values
void sortString(string s)
{
    int N = s.length();

    // Stores the frequency of each
    // character of the string
    vector<int> freq(256, 0);

    // Count and store the frequency
    for (int i = 0; i < N; i++) {
        freq[s[i]]++;
    }

    s = "";

    // Store the result
    for (int i = 0; i < 256; i++) {
        for (int j = 0; j < freq[i]; j++)
            s = s + (char)i;
    }

    // Print the result
    cout << s << "\n";

    return;
}

// Driver Code
int main()
{
    string S = "AAABBC ";
    sortString(S);

return 0;
}
