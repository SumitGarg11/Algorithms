#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
   void bfs(int node, int vis[], vector<int> adjList[]){
    vis[node] = 1;
    queue<int> q;
    q.push(node);
    while(!q.empty()){
      int nodee = q.front();
      q.pop();
      for(auto it : adjList[nodee]){
        if(!vis[it]){
          vis[it] = 1;
          q.push(it);
        }
      }
    }
   }
   void dfs(int node, int vis[], vector<int> adjList[]){
    vis[node] = 1;
    for(auto it : adjList[node]){
      if(!vis[it]){
        vis[it] = 1;
        dfs(it,vis,adjList);
      }
    }

   }
    int numProvinces(vector<vector<int>> adj) {
      int V = adj.size();
      vector<int> adjList[V];
      for(int i =0; i<V; i++){
        for(int j = 0; j<V; j++){
          // self loop not consider
          if(adj[i][j] == 1 && i!= j){
            adjList[i].push_back(j);
            adjList[j].push_back(i);
          }
        }
      }
      int vis[V] = {0};
      int count = 0;
      for(int i =0; i<V; i++){
        if(!vis[i]){
          count++;
          // dfs(i,vis,adjList);
          bfs(i,vis,adjList);
        }
      }
      return count;

    }
};
