#include <bits/stdc++.h>
using namespace std;
    
  int maxProfit(vector<int>& prices) {
        int res = 0, minVal = prices[0];
int n= prices.size();
	for(int i = 1; i < n; i++)
	{
		
			res = max(res, prices[i] - minVal);
			
			minVal = min(minVal, prices[i]);
	}

	return res;
    }   
int main()
{
       vector<int>arr= {2, 3, 10, 6, 4, 8, 1};

      cout<<maxProfit(arr);
    return 0;
}