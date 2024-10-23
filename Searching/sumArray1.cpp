#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> check(vector<int> &arr, int s, int n){
        int i,j=0;
        int sum = 0;
        for(j=0; j<n; j++){
            sum+= arr[j];
        
           while(sum>s && i<j){
              sum-=arr[i];
              i++;
            }
            if(sum == s){
                return {i+1,j+1};
            }
        }
        return {-1};
    }
    vector<int> subarraySum(vector<int> &arr, int s) {
        int n = arr.size();
       vector<int> ans = check(arr,s,n);
       return ans;
    }
};