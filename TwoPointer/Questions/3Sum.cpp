#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void twosum(vector<int> &nums, vector<vector<int>>&ans, int k, int target){
        // two pointer le lo traverse kar do 
        int i = k;
        int j = nums.size() - 1;
        while(i<j){
            if(nums[i] + nums[j] > target) j--;
            else if(nums[i] + nums[j] < target ) i++;
            else{
                ans.push_back({-target,nums[i],nums[j]});
                // Duplicate check
                while(i<j && nums[i] == nums[i+1]) i++;
                while(i<j && nums[j] == nums[j-1]) j--;
                i++;
                j--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        // approch 
        // sort // because index return nhi karna hai
        // Duplicate triplet nhi lena 
        // two sum ki help se is question ko kar de ge 
        if(nums.size() < 3){  // very very important 
            return {};
        }
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        // fixed one element that become over target
        for(int i =0 ; i<nums.size()-2; i++){  // very very important 
            if(i!=0 && nums[i] == nums[i-1]){
                continue;
            }
            twosum(nums,ans,i+1, -nums[i]);     
        }

        return ans;

    }
};