#include <bits/stdc++.h>
using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

bool isBadVersion(int version){
    
}
class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 1 && isBadVersion(n)){
            return n;
        }
        int s = 0;
        int e = n ;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(isBadVersion(mid)){
                e = mid -1;
            }
            else { 
                s = mid + 1;
            }
        }
        return s;
    }
};