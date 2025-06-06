class Solution {
public:
    vector<int> dp;
    
    int fun(int n , vector<int>& nums){
        if(n == 0) return nums[0];
        if(n == 1) return max(nums[0], nums[1]);

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for(int i = 2; i <= n; i++){
            int pick = nums[i] + dp[i-2];
            int skip = dp[i-1];
            dp[i] = max(pick, skip);
        }
        return dp[n];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];

        dp.assign(n, 0);
        return fun(n-1, nums);
    }
};

