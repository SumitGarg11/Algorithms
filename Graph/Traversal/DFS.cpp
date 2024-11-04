#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void dfsUtil(vector<int> adj[], int V, int node, vector<int> &ans, vector<int> &vis){
        ans.push_back(node);
        vis[node] = 1;
        for(auto it : adj[node]){
            if(!vis[it]){
                dfsUtil(adj, V, it, ans, vis);
            }
        }
    }
    vector<int> dfs(vector<int> adj[],int V){
        vector<int> ans;
        vector<int> vis(V,0);
        int start = 0;
        dfsUtil(adj, V, start, ans, vis);
       return ans;
    }
};
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i=0;i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Solution obj;
    vector<int> ans = obj.dfs(adj, n);
    for(auto it : ans){
        cout << it << " ";
    }
    return 0;
}