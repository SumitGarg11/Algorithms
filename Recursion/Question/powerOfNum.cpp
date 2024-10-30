#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //You need to complete this fucntion
    long long powFun(long long n, long long r){
        if(n==0) return 0;
        if(r==0) return 1; // power of zero is one 
        long long y;
        // if r is even then 
        if(r%2==0){
            y=powFun(n,r/2);
            y=(y*y)%1000000007;
        }
        else{
            // 2^3 = 2*2^2
            
            y = n % 1000000007; 
            y = (y*powFun(n,r-1)%1000000007)%1000000007;
        }
        return ((y+1000000007)%1000000007);
    }
    long long power(int N,int R)
    {
       //Your code here
       return powFun(N,R)%1000000007;
        
    }

};