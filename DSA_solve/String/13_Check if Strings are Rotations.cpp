#include <iostream>
#include <string>
using namespace std;

bool arerotations(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    string temp = s1 + s1;
    return temp.find(s2) != string::npos;
}

int main() {
    string s1 = "ABCD";
    string s2 = "CDAB";
    cout << arerotations(s1, s2) << endl;
    return 0;
}


// def areRotations(string1, string2):
//     size1 = len(string1)
//     size2 = len(string2)
//     temp = ''
 
//     # Check if sizes of two strings are same
//     if size1 != size2:
//         return 0
 
//     # Create a temp string with value str1.str1
//     temp = string1 + string1
 
//     # Now check if str2 is a substring of temp
//     # string.count returns the number of occurrences of
//     # the second string in temp
//     if (temp.count(string2) > 0):
//         return 1
//     else:
//         return 0