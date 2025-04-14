#include <bits/stdc++.h> 
using namespace std;
int fun(int ind, vector<int>&h, vector<int>&dp ){
    if(ind == 0) return 0;
    if(dp[ind] != -1){
        return dp[ind];
    }
    int left = fun(ind - 1 ,h,dp) + abs(h[ind] - h[ind-1]);
    int right = INT_MAX;
    if(ind > 1) right =  fun(ind - 2 ,h,dp) + abs(h[ind] - h[ind-2]);
    return dp[ind] = min(left,right);
}
int frogJump(int n, vector<int> &h)
{
    vector<int> dp(n+1,-1);
    return fun(n-1,h,dp);
}