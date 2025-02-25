#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int earliestFullBloom(vector<int> &plantTime, vector<int> &growTime)
    {
        int n = plantTime.size();
        vector<pair<int, int>> vec(n);
        for (int i = 0; i < n; i++)
        {
            vec[i] = {plantTime[i], growTime[i]};
        }
        // take that seed that taking the more grow time
        // so sort the vec in decending order
        auto lambda = [](pair<int, int> P1, pair<int, int> P2)
        {
            return P1.second > P2.second;
        };
        sort(vec.begin(), vec.end(), lambda);

        int maxBloomTime = 0;
        int prevPlantTime = 0;
        for (int i = 0; i < n; i++)
        {
            int currPlantTime = vec[i].first;
            int currBloomDay = vec[i].second;
            prevPlantTime += currPlantTime;
            int FlowerKabBanyeGa = prevPlantTime + currBloomDay;
            maxBloomTime = max(maxBloomTime, FlowerKabBanyeGa);
        }
        return maxBloomTime;
    }
};