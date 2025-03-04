#include <bits/stdc++.h>
using namespace std; 
class Solution {
public:
    vector<vector<string>> ans;
    vector<string> curr;
    bool isPalindrome(int l , int r, string &s){
        while(l<r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    void solve(int idx, string&s){
        int n = s.length();
        if(idx == n){
            ans.push_back(curr);
            return ;
        }
        for(int i =idx; i<n; i++){
            if(isPalindrome(idx, i, s)){
                curr.push_back(s.substr(idx, i-idx+1));
                solve(i+1,s);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        solve(0,s);
        return ans;
    }
};