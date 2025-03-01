#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
       
        int n = nums.size();
        long long  oper = 0;
        for(int i =n-2; i>=0; i--){
            if(nums[i] <= nums[i+1]){
                continue;
            }
            int parts = nums[i]/nums[i+1];
            if((nums[i])% nums[i+1] != 0){
                parts++;
            }
            oper +=  parts - 1;
            nums[i] = nums[i] / parts;
        }
        return oper;
    }
};