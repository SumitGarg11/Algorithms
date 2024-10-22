#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        // sort(arr.begin(), arr.end());
        // int ans = arr[k-1];
        // return ans;
        priority_queue<int, vector<int>, greater<int>>pq ;
        int n = arr.size();
        for(auto i : arr){
            pq.push(i);
        }
        int f =k-1;
        while(f>0){
            pq.pop();
            f--;
        }
        return  pq.top();
    }
};