#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    typedef pair<int,int> P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(auto it : nums){
            mpp[it]++;
        }
        priority_queue<P, vector<P>, greater<P>> pq;
        for(auto &it : mpp ){
            int v = it.first;
            int f = it.second;
            pq.push({f,v});
            if(pq.size() > k){
                pq.pop();
            }

        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};