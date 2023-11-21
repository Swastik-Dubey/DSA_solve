#include <bits/stdc++.h>
using namespace std;
    
    
int main()
{
    string str="geekforgeeks";
    int n=str.length();
    int ch[26]={0};
    for(int i=0;i<n;i++)
    { ch[str[i]-'a']++; }
    for(int i=0;i<26;i++)
    { if(ch[i]>0){
        cout<<char(i+'a')<<" "<<ch[i]<<endl;
    }
    }

    return 0;
}