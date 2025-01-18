#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<char>> arr;
#define F first
#define S second

using state = pair<int,int>;
vector<vector<int>>vis;
vector<vector<int>>dis;
void bfs(state sc_node){
    vis.assign(n,vector<int>(m,0));
    dis.assign(n,vector<int>(m,1e9));
    queue<state> q;
    vis[sc_node.F][sc_node.S] = 1;
    dis[sc_node.F][sc_node.S] = 0;
    q.push(sc_node);
    while(!q.empty()){
        state node = q.front();
        q.pop();
    }

}
int main(){
    cin>>n>>m;
    arr.resize(n);
    state st,en;
    for(int i=0; i<n; i++){
        arr[i].resize(m);
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j] == 'S'){
                st = {i,j};
            }else if(arr[i][j] == 'F'){
                en = {i,j};
            }
        }
    }
}