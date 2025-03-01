#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int s = 1;
        int e = arr.size()-2;
        int ans;
        int n = arr.size();
        if(arr.size() == 0) return 0;
        if(arr.size() == 1 ) return 0;
        // last element check
        if(arr[n-1] > arr[n-2]){
            return n-1;
        }
        if(arr[0] > arr[1]){
            return 0;
        }
        while(s<=e){
            int mid = (s+e)/2;
            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
                return mid;

            }
            else if(arr[mid]<arr[mid-1]){
                e = mid -1;
            }
            else {
                s = mid+1;
            }
        }
        return -1;
    }
};