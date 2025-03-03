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
       int n = str.size();
       vector<int> dp(n+1,0);
       unordered_map<char,int> lastOcc;
       dp[0] = 1;
       for(int i= 1 ; i<=n; i++){
           char ch = str[i-1];
           dp[i] = 2*dp[i-1];
           if(lastOcc.find(ch) != lastOcc.end()){
               dp[i] -= dp[lastOcc[ch] - 1];
           }
           lastOcc[ch] = i;
       }
       return dp[n];
    }
   
};