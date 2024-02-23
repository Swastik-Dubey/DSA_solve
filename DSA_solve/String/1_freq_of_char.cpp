#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    string str="geeksforgeeks";
    int count[26]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]>0){
            cout<<char(i+'a')<<" "<<count[i]<<endl;
        }
    }
} 
 

//  python
// s="geeksforgeeks"
// a=[0]*26
// l=len(s)
// for i in range(0,l):
//     a[ord(s[i])-ord('a')]+=1
    
// for i in range(0,26):
//     if (a[i]>1):
//         print(chr(ord("a")+i)," ",a[i],"\n")