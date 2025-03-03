#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> ans;
    vector<int> curr;

    void solve(vector<int> &arr, int target, int idx)
    {
        if (target < 0)
            return;

        if (target == 0)
        {
            ans.push_back(curr);
            return;
        }

        for (int i = idx; i < arr.size(); i++)
        {
            if (i > idx && arr[i] == arr[i - 1])
            { // Skip duplicates
                continue;
            }

            curr.push_back(arr[i]);             // Choose the current number
            solve(arr, target - arr[i], i + 1); // Move to the next index
            curr.pop_back();                    // Backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &arr, int target)
    {
        sort(arr.begin(), arr.end());
        solve(arr, target, 0);
        return ans;
    }
};
