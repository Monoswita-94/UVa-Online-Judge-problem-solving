
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Step 1: Initialize the vector with given elements
    vector<int> v = {1, 2, 3, 5};

    // Print the original vector
    cout << "Original vector: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    // Step 2: Erase the first element (v.erase(v.begin()))
    v.erase(v.begin());
    cout << "After erasing the first element: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    // Step 3: Erase the element at position v.begin() + 2 (the third element)
    v.erase(v.begin() + 2);
    cout << "After erasing the third element: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
