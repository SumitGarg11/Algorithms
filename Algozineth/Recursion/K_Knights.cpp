#include <bits/stdc++.h>
using namespace std;
int n,k;
int board[14][14];
int ans;
bool check(){
    
}
void rec(int level){
    if(level == k){ // level = no of knights is placed  
        ans++;
        return ;
    }
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(check(i,j)){
                board[i][j] = 1;
                rec(level+1);
                board[i][j] = 0;
            }
        }
    }

}
void solve(){
    cin>>n>>k;
    ans = 0;
    rec(0);
    cout<<ans<<endl;
    
}
int main(){
    solve();
}