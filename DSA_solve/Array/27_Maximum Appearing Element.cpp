// Input: L[ ] = {1, 4, 3, 1}, R[ ] = {15, 8, 5, 4}
// Output: 4

// Explanation: Overall ranges are: {1,2,3,4,5,6,7,8,9,10,11,12,13,14 15}, {4,5,6,7,8}, {3,4,5}, {1,2,3,4}. 

// In all these ranges, 4 appears the most times.

// Input: L[ ] = {1, 5, 9, 13, 21}, R[ ] = {15, 8, 12, 20, 24}
// Output: 5
// Explanation: Overall Ranges are: {1,2,3,4,5,6,7,8,9,10,11,12,13,14 15}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16,17,18,19,20},{21,22,23,24}
// In these ranges, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 all appear 2 times. The smallest number among all are 5.



// C++ program to find maximum occurred element in
// given N ranges.
#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

// Return the maximum occurred element in all ranges.
int maximumOccurredElement(int L[], int R[], int n)
{
	// Initialising all element of array to 0.
	int arr[MAX];
	memset(arr, 0, sizeof arr);

	// Adding +1 at Li index and subtracting 1
	// at Ri index.
	int maxi = -1;
	for (int i = 0; i < n; i++) {
		arr[L[i]] += 1;
		arr[R[i] + 1] -= 1;
		if (R[i] > maxi) {
			maxi = R[i];
		}
	}

	// Finding prefix sum and index having maximum
	// prefix sum.
	int msum = arr[0], ind;
	for (int i = 1; i < maxi + 1; i++) {
		arr[i] += arr[i - 1];
		if (msum < arr[i]) {
			msum = arr[i];
			ind = i;
		}
	}

	return ind;
}

// Driven code
int main()
{
	int L[] = { 1, 4, 9, 13, 21 };
	int R[] = { 15, 8, 12, 20, 30 };
	int n = sizeof(L) / sizeof(L[0]);

	cout << maximumOccurredElement(L, R, n) << endl;
	return 0;
}