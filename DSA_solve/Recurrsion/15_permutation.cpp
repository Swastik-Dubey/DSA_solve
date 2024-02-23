// Java program to print all permutations of a
// given string.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Permutation
{
public:
void permute(string str, int i,int j)
	{
		if (i == j-1)
			{
			    cout<<str<<endl;
			    return;
			}
		else
		{
			for (int k= i; k <= j-1; k++)
			{
				swap(str[i], str[k]);        // STL `swap()` used
 
        // recur for substring `str[i+1, n-1]`
        permute(str, i + 1, j);
 
        // backtrack (restore the string to its original state)
        swap(str[i], str[k]);
			}
		}
	}


};int main()
{         class Permutation obj;
		string str = "ABC";
		int n = str.length();
	    obj.permute(str, 0,n);
	}
