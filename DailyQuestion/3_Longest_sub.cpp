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