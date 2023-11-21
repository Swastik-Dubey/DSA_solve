#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr, int low, int high)
{
	// If the array is not rotated
	if (arr[low] <= arr[high]) {
		return arr[low];
	}

	// Binary search
	while (low <= high) {
		int mid = (low + high) / 2;

		// Check if mid is the minimum element
		if (mid-1 >= 0 && arr[mid] < arr[mid - 1]) {
			return arr[mid];
		}
		// If the left half is sorted, the minimum element
		// must be in the right half
		if (arr[mid] > arr[high]) {
			low = mid + 1;
		}

		// If the right half is sorted, the minimum element
		// must be in the left half
		else {
			high = mid - 1;
		}
	}

	// If no minimum element is found, return -1
	return -1;
}

// Driver program to test above functions
int main()
{
	vector<int> arr = { 5, 6, 1, 2, 3, 4 };
	int N = arr.size();
	cout << "The minimum element is "
		<< findMin(arr, 0, N - 1) << endl;
	return 0;
}
