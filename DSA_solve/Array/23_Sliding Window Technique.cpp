// Input  : arr[] = {100, 200, 300, 400}
//          k = 2
// Output : 700

// Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}
//          k = 4 
// Output : 39
// We get maximum sum by adding subarray {4, 2, 10, 23}
// of size 4.

// Input  : arr[] = {2, 3}
//          k = 3
// Output : Invalid
// There is no subarray of size 3 as size of whole
// array is 2.

#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


int maxSum(int arr[], int n, int k)
{
	int curr_sum = 0;

	for(int i = 0; i < k; i++)
		curr_sum += arr[i];

	int max_sum = curr_sum;

	for(int i = k; i < n; i++)
	{
		curr_sum += (arr[i] - arr[i - k]);

		max_sum = max(max_sum, curr_sum);
	}

	return max_sum;
}


int main() {
	
     int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;

     cout<<maxSum(arr, n, k);
    
}