#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> &c, int amount){
    vector<int> minCoins(amount+1,amount+1);
    minCoins[0] = 0;
    for(int i = 1; i<=amount; i++){
        for(int j = 0; j<c.size(); j++){
            if(i-c[j] >= 0){
                minCoins[i]  = min(minCoins[i] , 1+minCoins[i-c[j]]);
            }
        }
    }
    return minCoins[amount] != amount+1 ? minCoins[amount] : -1;
}
int main(){
    int n;
    cin>>n;
    int amount;cin>>amount;
    vector<int> c(n);
    for(int i =0; i<n; i++)cin>>c[i];
    int ans = fun(c,amount);
    cout<<ans;
}