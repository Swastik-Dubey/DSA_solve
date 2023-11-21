#include <iostream>
#include <limits.h>
using namespace std;

 bool isPrime(int n)
{
	if(n==1)
		return false;

	for(int i=2; i*i<=n; i++)
	{
		if(n % i == 0)
			return false; 
	}

	return true;
}

int main() {
    
    	int n = 65;
    	
    	printf("%s", isPrime(n) ? "true" : "false");
    	
    	return 0;
}