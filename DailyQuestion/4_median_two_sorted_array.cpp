#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int k=0;
        int i =0;
        int j= 0;
        int m = nums1.size();
        int n = nums2.size();
        vector<int> temp(m+n);
        while(i<m && j<n){
            if(nums1[i] < nums2[j]){
                temp[k] = nums1[i];
                i++;k++;
            }
            else {
                temp[k] = nums2[j];
                k++;j++;
            }
        }
        while(i<m){
            temp[k] = nums1[i];
            k++;i++;
        }
        while(j<n){
            temp[k] = nums2[j];
            k++;j++;
        }
        int size =m+n;
        if(size % 2 == 1){
            return temp[size/2];
        }
       return (temp[size/2] + temp[(size/2)-1])/2.0;
        

    }
};

// The time complexity of this solution is 
// 𝑂(𝑚+𝑛)
// O(m+n), where 𝑚 and n are the sizes of the two input arrays.
// This is because we iterate through both arrays once while merging them into a temporary array.
// The space complexity is also 
// 𝑂(𝑚+𝑛)
// O(m+n), as we create a new array to store the merged result.
// Finally, we compute the median by checking whether the combined size is odd or even, and return the middle value or the average of the two middle values