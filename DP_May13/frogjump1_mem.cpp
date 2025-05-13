

class Solution {
public:
    vector<int> dp;

    int fun(int n, vector<int> &heights){
        if(n == 0)  return 0;
        if(dp[n] != -1) return dp[n];
        int right = INT_MAX;
        int left = fun(n-1,heights)+abs(heights[n] - heights[n-1]);
        if(n > 1) right = fun(n-2,heights)+abs(heights[n] - heights[n-2]);
        return dp[n] = min( left , right );

    }
    int frogJump(vector<int>& heights) {
        int n = heights.size();
        dp.assign(n+1,-1);
        return fun(n-1,heights);
    }
};
