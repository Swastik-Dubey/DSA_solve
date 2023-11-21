#include <bits/stdc++.h>
using namespace std;
    
string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string result="";
    for (char c : str) {
        if (!ispunct(c)) { // If c is not a punctuation character
            result += c;
        }
    }
    str=result;
    return str;
}
    bool isPalindrome(string s) {
        int a=0;
        
        string d = removeSpaces(s);
        int b= d.length()-1;
        while(a<b){
            if(d[a]!=d[b]){
                return false;
               

            }
             a++;
                b--;
        }
        return true;
        
    }    
int main()
{    string s= "A man, a plan, a canal: Panama";
    cout<<isPalindrome(s)<<endl;
    
    
    return 0;
}