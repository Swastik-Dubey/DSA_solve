// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int arr[] = {5, 0, 6, 2, 3}, n = 5;
    int sum=0;
    for(int i=1; i<n-1; i++){
    int lmax[n];
    lmax[0]=arr[0];
    int rmax[n];
    for(int i=1;i<n;i++){
        if(arr[i]>lmax[i-1]){
            lmax[i]=arr[i];
        }
        else{
            lmax[i]=lmax[i-1];
        }
    }
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>rmax[i+1]){
            rmax[i]=arr[i];}
            else{
                rmax[i]=rmax[i+1];
            }
    }
    

    for(int i=0;i<n;i++) {
        sum+=min(lmax[i],rmax[i])-arr[i];
    }
    }
       cout<<sum<<endl;
    return 0;
}