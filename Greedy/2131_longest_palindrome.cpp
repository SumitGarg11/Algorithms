#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> mp;
        for(auto word : words){
            mp[word]++;
        }
        bool centerUsed = false;
        int ans = 0;
        for(auto word : words){
            string rev = word;
            reverse(rev.begin(), rev.end());
            if(rev != word){ // ab != ba so add in string ab ba
                if(mp[word] > 0 && mp[rev] > 0){
                    mp[word]--;
                    mp[rev]--;
                    ans += 4;
                }

            }
            else {
                // cc,cc ,if they are same 
                // abcc ccba
                if(mp[word] >= 2){
                    mp[word] -= 2; // cc cc 2 words
                    ans += 4;
                }
                else if(mp[word] == 1 &&  centerUsed == false){
                    mp[word]--;
                    ans += 2;
                    centerUsed = true;
                }
            }
        }
        return ans;
    }
};
