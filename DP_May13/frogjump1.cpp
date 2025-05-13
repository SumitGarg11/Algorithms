

class Solution {
public:
    int fun(int n, vector<int> &heights){
        if(n == 0)  return 0;
        int right = INT_MAX;
        int left = fun(n-1,heights)+abs(heights[n] - heights[n-1]);
        if(n > 1) right = fun(n-2,heights)+abs(heights[n] - heights[n-2]);
        return min(left , right);

    }
    int frogJump(vector<int>& heights) {
        int n = heights.size();
        return fun(n-1,heights);
    }
};
