#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        // left part ki multiple kra li phale 
        ans[0] =1;
        for(int i=1; i<nums.size(); i++){
            ans[i] = ans[i-1]*nums[i-1];
        }

        // right part ki multiple kra lo 

        int right = 1;
        for(int i =nums.size()-1; i>=0; i--){
            ans[i] = ans[i] * right;
            right *= nums[i];
        }
        return ans;
        
    }
};