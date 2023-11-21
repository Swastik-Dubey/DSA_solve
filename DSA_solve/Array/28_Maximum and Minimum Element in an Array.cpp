#include <bits/stdc++.h>
using namespace std;
    
    
int main()
{
    int n=7;
    int arr[n]={4,2,1,5,5,8,3};\
    int mina=INT32_MAX;
    int maxa=INT32_MIN;
    for(int i=0;i<n;i++)
    {
        maxa=max(maxa,arr[i]);
        mina=min(mina,arr[i]);

    
    }
    cout<<mina<<" "<<maxa<<endl;
    cout<<endl;
    return 0;
}