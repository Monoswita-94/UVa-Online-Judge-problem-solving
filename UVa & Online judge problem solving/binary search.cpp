#include <bits/stdc++.h>
using namespace std;
	int binarySearch(int arr[], int low, int high, int x){
	while (low <= high) {
int mid = low + (high - low) / 2;
	if (arr[mid] == x) // Check if x is present at mid
return mid;
	if (arr[mid] < x) // If x greater, ignore left half
	low = mid + 1;
	else // If x is smaller, ignore right half
	high = mid - 1;  }
	return -1; } // If we reach here, then element was not present
	int main() {
	int arr[] = { 5, 7, 8, 10, 16, 23, 25, 56, 72, 100 };
   int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	if(result == -1) cout << "Element is not present<<endl";
	else cout << "Element is at index " << result<<endl;
	return 0;  }
