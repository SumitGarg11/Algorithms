#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        int ice = 0;
        sort(costs.begin(),costs.end());
        for(int i =0; i<n; i++){
            if(costs[0] > coins){
                break;
            }
            else if(costs[i] <= coins){
                coins -= costs[i];
                ice++;
            }
            else if(coins == 0) break;

        }
        return ice;
    }
};