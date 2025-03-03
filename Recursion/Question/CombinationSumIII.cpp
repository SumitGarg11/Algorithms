#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;
    void solve(int idx, int sum , int n, int k){
        if(sum == n && k == 0){
            ans.push_back(curr);
            return;
        }
        if(sum > n) return ;
        for(int i =idx; i<=9; i++){
            if(i>n) break;
            curr.push_back(i);
            solve(i+1,sum+i, n,k-1);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        solve(1,0,n,k);
        return ans;
    }
};