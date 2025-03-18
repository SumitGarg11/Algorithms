#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void dfs(int vis[], vector<int> &ans, int node,vector<int> adj[] ){
      vis[node] = 1;
      ans.push_back(node);
      for(auto it : adj[node]){
        if(!vis[it]){
          dfs(vis,ans,it,adj);
        }
      }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
      int vis[V] = {0};
      vector<int> ans;
      dfs(vis,ans,0,adj);
      return ans;
    }
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
      int vis[V] = {0};
      queue<int> q;
      vector<int> bfs;
      int start  = 0;
      vis[0] = 1;
      q.push(start);
      while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it : adj[node]){
          if(!vis[it]){
            vis[it] = 1;
            q.push(it);
          }
        }
      }
      return bfs;
    }
};
