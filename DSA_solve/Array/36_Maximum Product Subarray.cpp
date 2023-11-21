#include <bits/stdc++.h>
using namespace std;
    
int maxProduct(vector<int>& nums) {
    int ans = nums[0];
    int dpMin = nums[0];  // Min so far
    int dpMax = nums[0];  // Max so far

    for (int i = 1; i < nums.size(); ++i) {
      const int num = nums[i];
      const int prevMin = dpMin;  // dpMin[i - 1]
      const int prevMax = dpMax;  // dpMax[i - 1]
      if (num < 0) {
        dpMin = min(prevMax * num, num);
        dpMax = max(prevMin * num, num);
      } else {
        dpMin = min(prevMin * num, num);
        dpMax = max(prevMax * num, num);
      }
      ans = max(ans, dpMax);
    }

    return ans;
  }    
int main()
{
     vector<int> nums = { 2,3,-2,4 };
	
	cout<<maxProduct(nums) ;
    return 0;
}