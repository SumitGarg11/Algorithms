#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string &s, int i, int j){
        if(i>=j) return true;
        if(s[i] == s[j]) return isPalindrome(s,i+1,j-1);
        return false;
    }
    string longestPalindrome(string s) {
        int maxLen = INT_MIN;
        int sp = 0; // starting point of string
        for(int i=0; i<s.length(); i++){
            for(int j = i; j<s.length(); j++){
                if(isPalindrome(s,i,j) == true){
                    if(j-i+1 > maxLen){
                        maxLen = j-i+1;
                        sp = i;
                    }
                }
            }
        }
        return s.substr(sp,maxLen);
    }
};

// 🚀 How to Explain in an Interview:
// 👤 Interviewer: Can you explain the time and space complexity of your approach?

// 🗨️ You:

// "This approach generates all possible substrings using two nested loops, resulting in 
// O(n2) iterations. For each substring, we check if it's a palindrome using a recursive function, which takes 

// O(n) time in the worst case. Thus, the overall time complexity is 
// O(n3).
// The space complexity is 

// O(n) due to the recursive function call stack, but it can be reduced to 

// O(1) with an iterative approach."

// 👤 Interviewer: Can this be optimized?

// 🗨️ You:

// "Yes! A better approach is the expand around center method, reducing the time complexity to 
// O(n2) or using Dynamic Programming to achieve the same complexity but with memoization."