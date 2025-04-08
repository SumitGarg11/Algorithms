class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int max1 = 0;
        while(left < right){
            int lh = height[left];
            int rh = height[right];
            int w = right - left;
            int h = min(lh,rh);
            int area = w*h;
            max1 = max(max1,area);
            if(height[left] < height[right])left++;
            else if (height[left] > height[right]) right--;
            else {left++;right--;}
        }
        return max1;
    }
};

How to Explain to Interviewer:
I’ve used a two-pointer technique to solve this problem in linear time O(n)  with constant space O(1). The core idea is that the amount of water that can be trapped between two lines depends on the shorter height among the two and the distance between them. I start with two pointers at both ends of the array. At each step:

I calculate the area formed by the two lines using: area = min(height[left], height[right]) * (right - left)

I update the maximum area if the current one is greater.

Then, I greedily move the pointer that points to the shorter line inward, because only moving the shorter line can potentially result in a larger area.

I continue this until both pointers meet. This is more efficient than the brute-force approach, which would take O(n²) time

