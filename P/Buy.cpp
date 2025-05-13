#include <bits/stdc++.h>
using namespace std;
int func(int ind, int buy, int cap, vector<int>&p, int n, vector<vector<vector<int>>>&dp){
    if(cap == 0 || ind == n) return 0;
    if(dp[ind][buy][cap] != -1) return dp[ind][buy][cap];
    if(buy){
        return max((-p[ind]+func(ind+1,0,cap,p,n,dp)), (0+func(ind+1,1,cap,p,n,dp)));
    }
    return max((p[ind]+func(ind+1,1,cap-1,p,n,dp)), (0+func(ind+1,0, cap-1,p,n,dp)));
}
int main(){
    int n;cin>>n;
    vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
    vector<int> p(n);
    for(int i =0; i<n; i++)cin>>p[i];
    int ans = func(0,1,2,p,n,dp);
    cout<<ans;

}