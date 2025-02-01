#include <bits/stdc++.h>
using namespace std;
int n;
void rec(int level, string curr, int cnt){
    if(cnt < 0) return ;
    if(level == n){
        if(cnt == 0){
            cout<<curr<<"\n";
        }
        return ;
    }
    rec(level+1,curr+'(', cnt+1);
    rec(level+1,curr+')', cnt-1);
}
void solve(){
    cin>>n;
    rec(0, "" ,0);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc =1;
    for(int i =1; i<=tc; i++)
    solve();
}