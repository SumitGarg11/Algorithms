#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void func(int i ,int sum ,  vector<int> &arr, int n , vector<int>&sumSubset){
        if(i == n){
            sumSubset.push_back(sum);
            return ;
        }
        func(i+1,sum+arr[i],arr,n,sumSubset); // pick the element
        func(i+1,sum,arr,n,sumSubset); // not pick the element
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        vector<int> sumSubset;
        func(0,0,arr,n,sumSubset);
        sort(sumSubset.begin(), sumSubset.end());
        return sumSubset;
        
    }
};