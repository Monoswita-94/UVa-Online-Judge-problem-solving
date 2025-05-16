#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size, counter;
    cin >> size >> counter;
    vector<int> freq(counter + 1, 0);

    for (int i = 0; i < size; ++i) {
        int num;
        cin >> num;
        freq[num]++;
    }

    for (int i = 1; i <= counter; ++i) {
        cout << freq[i] << endl;
    }

    return 0;
}


