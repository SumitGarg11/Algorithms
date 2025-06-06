#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x%10 == 0 && x != 0)){
            return false;
        }
        int reversed_num = 0;
        while(x > reversed_num){
            reversed_num = reversed_num * 10 + x%10;
            x=x/10;
        }
        return x == reversed_num || x == reversed_num/ 10;
    }
};