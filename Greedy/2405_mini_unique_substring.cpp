#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int partitionString(string s) {
        int n = s.length();
        vector<int> lastseen(26,-1);
        int count = 0;
        int start = 0;
        for(int i =0; i<n; i++){
            char ch = s[i];
            if(lastseen[ch - 'a'] >= start ){
                count++;
                start = i;
            }
            lastseen[ch - 'a'] = i;

        }
        return count+1;
    }
};