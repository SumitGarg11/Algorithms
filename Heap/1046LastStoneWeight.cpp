#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        if(stones.size() == 1){
            return stones[0];
        }
        for(int i =0; i<stones.size(); i++){
            pq.push(stones[i]);
        }
        while(pq.size() > 1){
            int v = pq.top();
            pq.pop();
            int v1 = pq.top();
            pq.pop();
            int ans = abs(v-v1);
            if(ans != 0){
                pq.push(ans);
            }
        }
        return pq.empty() ? 0 : pq.top();
    }
};