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