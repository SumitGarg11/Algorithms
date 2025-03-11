#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto it : nums){
            pq.push(it);
        }
        while(k != 1){
            int a = pq.top();
            pq.pop();
            k--;
        }
        int ans = pq.top();
        return ans;
    }
};
