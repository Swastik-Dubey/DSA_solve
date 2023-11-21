#include <bits/stdc++.h>
using namespace std;
    
int subarray(int arr[], int n){
    int  sum= arr[0];
    int  l= arr[0];
    for(int i=0; i<n; i++){
        sum=max(sum+arr[i],sum);
        l=max(l,sum);}
        return l;
}
int sum(int arr[], int n){
    int m=subarray(arr,n);
    if(m>=1){
        return m;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr[i]=-arr[i];}
        int s= sum+ subarray(arr,n);
        return max(s,m);
        
}
 int main(){
    int n =7;
    int arr[n]={-5,5,6,7,-2,1,5};
    cout<< sum(arr,n)<<endl;
    
 }