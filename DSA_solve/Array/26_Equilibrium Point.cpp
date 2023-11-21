// C++ program to find equilibrium
// index of an array
#include <bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n)
{
	int sum = 0; // initialize sum of whole array
	int leftsum = 0; // initialize leftsum

	/* Find sum of the whole array */
	for (int i = 0; i < n; ++i)
		sum += arr[i];

	for (int i = 0; i < n; ++i) {
		sum -= arr[i]; // sum is now right sum for index i

		if (leftsum == sum)
			return i;

		leftsum += arr[i];
	}

	// /* If no equilibrium ...

    return -1;
}

int main(){
    int n=7;
    int arr[n] = { -7, 1, 5, 2, -4, 3, 0 };
	cout<<equilibrium(arr,n)<<endl;
}
	