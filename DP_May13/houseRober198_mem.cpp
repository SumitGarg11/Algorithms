class Solution {
public:
    vector<int> dp;
    int fun(int n , vector<int>& nums){
        if(n == 0) return nums[0];
        if(n == 1) return max(nums[0], nums[1]);
        if(dp[n] != -1) return dp[n];
        int pick = fun(n-2,nums)+nums[n];
        int skip = fun(n-1,nums);
        return dp[n] = max(pick,skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.assign(n+1,-1);
        return fun(n-1,nums);
    }
};
