#include <algorithm>
#include <iostream>
#include <vector>

void push_zeros_to_end(std::vector<int>& arr)
{
int count=0;
for(int i=0; i<arr.size();i++)
{
	if(arr[i]!=0){
		std::swap(arr[i],arr[count]);
		count++;
	}
}}

int main()
{
std::vector<int> arr{1,9,8,4,0,0,2,7,0,6,0,9};

push_zeros_to_end(arr);

for(const auto& i : arr)
	std::cout << i << ' ';

std::cout << "\n";

return 0;
}
