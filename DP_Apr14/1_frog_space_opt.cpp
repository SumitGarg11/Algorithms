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
    int prev2 = 0;
    int prev = 0;
    for(int i =1; i<n; i++){
        int fs = prev + abs(h[i] - h[i-1]);
        int ss = INT_MAX;
        if(i > 1) ss = prev2 + abs(h[i] - h[i-2]);
        int curr = min(fs,ss);
        prev2 = prev;
        prev = curr;
    }
    return prev;
}