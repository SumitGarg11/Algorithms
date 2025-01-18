#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>g;
vector<int>vis;
map<int,int>mp;


int dfs(int i,int cmp){
    int size=1;
    vis[i]=cmp;
    for(auto v:g[i]){
        if(!vis[v]){
            size+=dfs(v,cmp);
        }
    }
    return size;
}
void solve(){
    int n,m,q;
    cin>>n>>m>>q;
    g.resize(n+1);
    vis.resize(n+1,0);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int cmp=1;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            int size=dfs(i,cmp);
            mp[cmp]=size;
            cmp++;
        }
    }
    while(q--){
        int x,y,z;
        cin>>x>>y;
        if(x==1){
            cout<<mp[vis[y]]<<'\n';
        }
        else{
            cin>>z;
            cout<<(vis[y]==vis[z]?"YES":"NO")<<'\n';
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
        solve();

}