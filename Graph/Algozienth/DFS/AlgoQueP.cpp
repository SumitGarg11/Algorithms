#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>g;
vector<int> vis;
map<int,int> mpp;

int dfs(int node, int cmpo){
    int size = 1;
    vis[node] = cmpo;
    for(auto v : g[node]){
        if(!vis[v]){
            size += dfs(v,cmpo);
        }
    }
    return size;
}
void solve(){
    int n,m,q;
    cin>>n>>m>>q;
    g.resize(n+1);
    vis.assign(n+1,0);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int cmpo = 1;
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            int size = dfs(i,cmpo);
            mpp[cmpo] = size;
            cmpo++;
        }
    }
    while (q--){
        int x,y,z;
        cin>>x>>y;
        if(x==1){
            cout<<mpp[vis[y]]<<"\n";
        }
        else {
            cin>>z;
            cout << (vis[y]==vis[z]?"Yes":"No")<<endl;
        }
    }
}
int main(){
   solve();
}