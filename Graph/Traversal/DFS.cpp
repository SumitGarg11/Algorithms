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

class Solution1 {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node,vector<vector<int>>& adj,  vector<int> &vis,  vector<int> & dfsAns ){
        vis[0] =1 ;
        dfsAns.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] =  1;
                dfs(it, adj,vis,dfsAns);
            }
        }
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        int V = adj.size();
        vector<int> vis(V,0);
        
        int start = 0;
        vector<int> dfsAns;
        dfs(start,adj,vis,dfsAns);
        return dfsAns;
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

//  adj = [[2,3,1], [0], [0,4], [0], [2]]
// output - [0, 2, 4, 3, 1]
//           0
//        /  |   \
//       2   3    1
//       |
//       4