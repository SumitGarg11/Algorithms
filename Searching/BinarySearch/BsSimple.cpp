#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int ans = -1;
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]==k){
                ans = mid;
               return ans;
               
                
            }
            else if(arr[mid] > k){
                high=mid-1;
            }
            else low = mid + 1;
            
        }
        return  ans;
    }
};