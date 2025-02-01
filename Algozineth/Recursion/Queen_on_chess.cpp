#include <bits/stdc++.h>
using namespace std;
int n = 8;
int queen[8];
char chess[8][8];
bool check(int row , int col){
    for(int pr = 0; pr<row; pr++){
        int pc = queen[pr];
        if(pc == col || abs(row-pr) == abs(col-pc)){
            return false;
        }
    }
    return true;
}


int rec(int level){
    if(level == n){
        return 1;
    }
    int ans = 0;
    for(int ch =0; ch<n; ch++){
        if(chess[level][ch] == '.' && check(level,ch)){
            queen[level] = ch;
            ans += rec(level+1);
            queen[level] = -1;
        }
    }
    return ans;
}

void solve(){
    memset(queen,-1,sizeof(queen));
    memset(chess,'.',sizeof(chess));
    for(int i =0; i<8; i++){
        for(int j =0; j<8; j++){
            cin>>chess[i][j];
        }
    }
    int ans = rec(0);
    cout<<ans;
}

int main(){
    solve();
}