#include <bits/stdc++.h> 
using namespace std; 


int nonRep(string &str) 
{
    for(int i=0;i<str.length();i++){
        bool flag=false;
        for(int j=0;j<str.length();j++){
            if(i!=j&&str[i]==str[j]){
                flag=true;
                break;
            }
        }
        if(flag==false)return i;
    }
    return -1;
}
 
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost non-repeating element:"<<endl;
    cout<<nonRep(str)<<endl;  
    
    return 0; 
} 