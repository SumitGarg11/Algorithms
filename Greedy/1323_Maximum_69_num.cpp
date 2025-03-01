#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximum69Number (int num) {
        int placeValueSix =-1;
        int placeValue = 0;
        int temp = num;
        while(temp > 0){
            int rem = temp % 10;
            if(rem == 6){
                placeValueSix = placeValue;
            }
            temp = temp / 10;
            placeValue +=1;
        }
        if(placeValueSix == -1) return num ; // we never got 6
        return num + 3*pow(10,placeValueSix);
    }
};