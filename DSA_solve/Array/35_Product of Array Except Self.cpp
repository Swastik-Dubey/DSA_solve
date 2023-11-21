#include <bits/stdc++.h>
using namespace std;
    
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    // Use ans as the prefix product array
    for (int i = 1; i < n; ++i)
      ans[i] = ans[i - 1] * nums[i - 1];

    int suffix = 1;  // Suffix product
    for (int i = n - 1; i >= 0; --i) {
      ans[i] *= suffix;
      suffix *= nums[i];
    }

    return ans;
    }    
int main()
{
    vector<int> nums = { 7, 3, 4, 5, 5, 6, 2 };
	
	nums= productExceptSelf(nums) ;
    for(int i = 0; i < nums.size(); ++i){
        cout<<nums[i]<<" ";
    }

    return 0;
}