#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        int n = tokens.size();
        int i = 0;
        int j = n - 1;
        int maxScore = 0;
        int s = 0;
        sort(tokens.begin(), tokens.end());
        while (i <= j)
        {
            if (power >= tokens[i])
            {
                s += 1;
                maxScore = max(s, maxScore);
                power -= tokens[i];
                i++;
            }
            else if (s >= 1)
            {
                s -= 1;
                power += tokens[j];
                j--;
            }
            else
            {
                // i++;
                return maxScore;
            }
        }
        return maxScore;
    }
};