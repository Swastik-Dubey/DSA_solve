
#include <bits/stdc++.h>
using namespace std;

using namespace std;

int getlargest(int arr[],int n)
{
    int current=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>current){
            current=arr[i];
        }
    }
    
    return current;
}
int main()
{
    int arr[]={5,8,20,15};
    cout<<getlargest(arr,4);
    return 0;
}