#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // pq -{sum,{index i , index j}}
    typedef pair<int,pair<int,int>> P;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<P,vector<P>,greater<P>> pq;
        int m = nums1.size();
        int n = nums2.size();
        int sum = nums1[0]+nums2[0];
        pq.push({sum,{0,0}});
        set<pair<int,int>> visited;
        visited.insert({0, 0});
        vector<vector<int>> ans;
        while(k-- && !pq.empty()){
            auto temp = pq.top();
            pq.pop();
            int i = temp.second.first;
            int j = temp.second.second;
            ans.push_back({nums1[i], nums2[j]});
            // i,j+1 if possibel
            if(j+1 < n && visited.find({i,j+1}) == visited.end()){
                pq.push({nums1[i] + nums2[j + 1], {i, j + 1}});
                visited.insert({i, j + 1});

            }
            if(i + 1 < m && visited.find({i + 1, j}) == visited.end()) {
                pq.push({nums1[i + 1] + nums2[j], {i + 1, j}});
                visited.insert({i + 1, j});
            }
        //       {0,0}
        //     /       \
        //    (0,0+1)   {0+1,0}
        }
        return ans;
    }
};