#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dp;

    int climbStairs(int n) {
        dp.assign(n + 1, -1);  
        return helper(n);
    }

    int helper(int n) {
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i<=n; i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
