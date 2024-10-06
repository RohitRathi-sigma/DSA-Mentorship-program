// Given a string, find the length of the longest common substring from two given strings.

#include <iostream>
#include <algorithm>
using namespace std;

//Helper function
int longestCommonSubstringUtil(string& s1, string& s2, int i, int j, int count) {
    if (i == 0 || j == 0)
        return count;

    if (s1[i - 1] == s2[j - 1]) {
        count = longestCommonSubstringUtil(s1, s2, i - 1, j - 1, count + 1);
    }
    
    return max(count, max(longestCommonSubstringUtil(s1,s2,i-1,j,0), 
                          longestCommonSubstringUtil(s1, s2, i, j - 1, 0)));
}

// Main function 
int longestCommonSubstring(string s1, string s2) {
    int n = s1.size();
    int m = s2.size();
    return longestCommonSubstringUtil(s1, s2, n, m, 0);
}

int main() {
    string s1 = "ABA";
    string s2 = "BABCA";
    
    int result = longestCommonSubstring(s1, s2);
    cout << "Length of the longest common substring: " << result << endl;

    return 0;
}