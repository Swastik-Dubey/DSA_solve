#include <bits/stdc++.h>
using namespace std;
void swap(int x, int y){
    int k=x;
    x=y;
    y=k;


}
    
int partition(int arr[], int l, int r){
    int pivot= arr[r];
    int i= l-1;
    for(int j=l; j<r;j++){
        if(arr[j]< pivot){
            i++;
            swap(arr[j], pivot);
    }}
    swap(arr[i+1],pivot);
    return i+1;

}
void quicksort(int arr[], int l, int r){
 if(l<r){
    int pi= partition(arr,l,r);
    quicksort(arr,l,pi-1);
    quicksort(arr,pi+1,r);
 }
}
    
int main()
{
    int arr[7]={4,5,2,1,7,8,3};
    quicksort(arr, 0,sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < 7; i++)
    {
       cout<<arr[i]<<" "<<endl;
    }
    
    return 0;
}