
#include <iostream>
#include <vector>

using namespace std;

// Function to perform a flip operation
void flip(vector<int>& arr, int index) {
    int i = 0, j = index;
    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

// Function to find the minimum number of flips to sort the array
int minFlips(vector<int>& arr) {
    int n = arr.size();
    int flips = 0;
    for (int i = n - 1; i >= 0; i--) {
        int maxIndex = i;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            flip(arr, maxIndex);
            flip(arr, i);
            flips += 2;
        }
    }
    return flips;
}

int main() {
    int N;
    while (cin >> N) {
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int minOperations = minFlips(arr);
        cout << "Minimum exchange operations : " << minOperations << endl;
    }

    return 0;
}
