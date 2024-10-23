#include <bits/stdc++.h>
using namespace std;

class Solution {
    
  public:
    int peakElement(int arr[], int n) {
        // Your code here
        int low = 0;
        int high = n - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;

            // If mid is smaller than its right neighbor, move to the right half
            if (arr[mid] < arr[mid + 1]) {
                low = mid + 1;
            } 
            // Otherwise, move to the left half
            else {
                high = mid;
            }
        }
        // At the end of the loop, low and high will converge to the peak element
        return low;
    }
};