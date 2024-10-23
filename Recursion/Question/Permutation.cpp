#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<string> find_permutation(string s) {
        // Code here there
        vector<string> ans;
        sort(s.begin(), s.end());
        // sort the lexigograpghy order 
        do{
            ans.push_back(s);
        }while(next_permutation(s.begin(),s.end()));
        return ans;
    }
};