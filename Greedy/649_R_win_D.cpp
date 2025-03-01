#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n;
    void removeSenator(string &s, vector<bool> &remove, char ch, int idx){
        while(true){
            if(s[idx] == ch && remove[idx] == false){
                remove[idx] = true;
                break;
            }
            idx = (idx+1)%n;
        }
    }
    string predictPartyVictory(string s) {
        int idx = 0;
         n = s.length(); 
        vector<bool> remove(n,false);
        int R_count = count(s.begin(),s.end(), 'R');
        int D_count = n-R_count;
        while(R_count > 0 && D_count > 0){
            if(!remove[idx]){
                if(s[idx] == 'R'){
                    removeSenator(s,remove,'D',(idx+1)%n);
                    D_count--;
                }
                else {
                    removeSenator(s,remove,'R',(idx+1)%n);
                    R_count--;
                }
            }
            idx = (idx+1)%n;
        }
        return R_count == 0 ? "Dire" : "Radiant";
    }
};