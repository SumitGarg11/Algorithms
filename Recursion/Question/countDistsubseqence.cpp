#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string betterString(string str1, string str2) {
        // code here
        int a = getAllSubsequence(str1); // return the size of distinct
        int b = getAllSubsequence(str2);
        if(b>a) return str2;
        return str1;
    }
    int getAllSubsequence(string str){
        unordered_set<string> ans;
        generateSubsequence(ans,0,"",str);
        return ans.size();
    }
    void generateSubsequence(unordered_set<string>&ans, int i, string curr, string s){
        if(i == s.length()){
            ans.insert(curr);
            return;
        }
        generateSubsequence(ans,i+1,curr+s[i] , s);
        generateSubsequence(ans,i+1,curr,s);
    }
};

// TLE 