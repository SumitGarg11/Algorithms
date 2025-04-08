#include <bits/stdc++.h>
using namespace std;
int fun(int n, vector<int> &dp){
    if(n<=1) return n;
    if(dp[n] != -1) return dp[n]; // step 2 before subproblem dp have some value of not 
    return dp[n] = fun(n-1,dp) + fun(n-2, dp); // step 1 to store in dp
}


int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<< fun(n,dp);
}