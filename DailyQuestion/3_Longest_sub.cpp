#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mpp;
        int maxLen = 0;
        int left = 0;
        if(s.size() == 0) return 0;
        for(int right = 0; right < s.size(); right++){
            if(mpp.count(s[right]) == 0){
                mpp.insert(s[right]);
                maxLen = max(maxLen,right-left+1);

            }
            else{
                while(mpp.count(s[right])){
                    mpp.erase(s[left]);
                    left++;
                }
                mpp.insert(s[right]);
            }


        }
        return maxLen;
        
    }

};

// The time complexity of this algorithm is O(N) where N is the length of the string.
// We use two pointers and an unordered set to track unique characters in the current window
// The space complexity is O(K) where K is the size of the longest unique substring. 
// We only store unique characters, making the operations efficient.