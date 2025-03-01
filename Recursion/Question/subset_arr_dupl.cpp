#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void func(int i, int n, vector<vector<int>>& ans, vector<int>& nums, vector<int>& subset)  {
        if (i == n) {
            ans.push_back(subset);
            return;
        }

        // Include nums[i]
        subset.push_back(nums[i]);
        func(i + 1, n, ans, nums, subset);
        subset.pop_back();

        // Skip duplicate elements
        while (i + 1 < n && nums[i] == nums[i + 1]) {
            i++;
        }

        // Exclude nums[i] and move to the next distinct number
        func(i + 1, n, ans, nums, subset);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> subset;
        
        // Sort to handle duplicates
        sort(nums.begin(), nums.end());
        
        func(0, n, ans, nums, subset);
        return ans;
    }
};
