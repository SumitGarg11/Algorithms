#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    void func(vector<int>& arr, int target, vector<int>&v, int i){
        if(i == arr.size()) return;
        if(target == 0){
            ans.push_back(v);
        }
        while(i<arr.size() && target-arr[i] >= 0 )
        {
            v.push_back(arr[i]);
            func(arr,target-arr[i], v,i);
            i++;
            v.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
       
        sort(arr.begin(), arr.end());
        set<int> s(arr.begin(), arr.end());
        arr.assign(s.begin(),s.end());
        vector<int> v;
        func(arr,target,v,0);
        return ans;

    }
};