#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        int count = 0;
        vector<int> reuiredExtraRock(n,0);
        for(int i =0; i<n; i++){
            int required = capacity[i] - rocks[i];
            reuiredExtraRock[i] = (required);
        }
        
        sort(reuiredExtraRock.begin(),reuiredExtraRock.end());
        for(int i=0; i<n; i++){
            if(reuiredExtraRock[i] == 0){
                count++;
            }
            else {
                if(additionalRocks >= reuiredExtraRock[i]){
                    additionalRocks-=reuiredExtraRock[i];
                    count++;
                }
                else break;
            }
        }
        return count;
    }
};
