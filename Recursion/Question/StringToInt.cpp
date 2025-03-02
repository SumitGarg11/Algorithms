#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        long ans  = 0;
        int i =0;
        int sign = 1;
        // if any space is coming then skip it 
        while(i<n && s[i] == ' '){
            i++;
        }
        // check if postive or negative 
        if(s[i] == '-'){
            sign = -1;
            i++;
        }
        // if postive then sign remain postive 
        else if(s[i] == '+'){
            i++;
        }
        while(i<n){
            if(s[i] >= '0' && s[i] <= '9' ){
                ans =  ans * 10 + (s[i] - '0');
            
            if(ans > INT_MAX && sign == -1){
                return INT_MIN;
            }
            else if(ans > INT_MAX && sign == 1){
                return INT_MAX;
            }
            i++;
            }
            else {
                return ans * sign ;
            }
        }
        return (ans * sign);

    }
};