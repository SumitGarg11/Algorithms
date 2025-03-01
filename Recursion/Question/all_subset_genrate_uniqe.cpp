#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void func(int i, int n, vector<vector<int>> &ans, vector<int> &nums, vector<int> &subset)
    {
        if (i == n)
        {
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        func(i + 1, n, ans, nums, subset);
        subset.pop_back();

        func(i + 1, n, ans, nums, subset);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> subset;
        func(0, n, ans, nums, subset);
        return ans;
    }
};
