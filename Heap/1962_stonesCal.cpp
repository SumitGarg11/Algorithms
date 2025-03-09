#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minStoneSum(vector<int> &piles, int k)
    {
        priority_queue<int> pq;

        for (int it : piles)
        {
            pq.push(it);
        }

        while (k--)
        {
            int v = pq.top();
            pq.pop();
            int a = v / 2;
            pq.push(v - a); // Push back the remaining stones
        }

        int sum = 0;
        while (!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }

        return sum;
    }
};
