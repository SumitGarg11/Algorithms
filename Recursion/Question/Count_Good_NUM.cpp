#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long MOD = 1000000007;
    
    long pow(long x, long n){
        if(n==0) return 1;
        long temp = pow(x,n/2);
        if(n%2 == 0){
            return (temp * temp)%MOD;
        }
        else {
            return (x*temp*temp)%MOD;
        }
    }
    int countGoodNumbers(long long n) {
        long  even_index = (n+1)/2;
        long  odd_index = (n)/2;
        long first = pow(5,even_index)%MOD;
        long second = pow(4,odd_index)%MOD;
        return (int)((first*second)%MOD);

    }
};