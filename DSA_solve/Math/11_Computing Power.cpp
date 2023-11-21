#include <iostream>
#include <limits.h>
using namespace std;

 int power(int x, int n)
{
	if(n == 0)
		return 1;

	int temp = power(x, n/2);

	temp = temp * temp;

	if(n % 2 == 0)
		return temp;
	else
		return temp * x; 
}
int main() {
    
    int n=6;
	int arr[n]={0,1,2,3,4};
	int idx=3, a=88;
	for(int i=n-1;i>=idx;i--){
		arr[i+1]=arr[i];
	}
	arr[idx]=a;
	for(int x:arr){
		cout<<arr[x]<<" "<<endl;
	}
	
}