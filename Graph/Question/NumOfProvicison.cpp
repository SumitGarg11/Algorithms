#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int node,vector<int> isConnected[],vector<int> &vis){
        vis[node] = 1;
        for(auto it : isConnected[node]){
            if(!vis[it]){
                vis[it] = 1;
                dfs(it, isConnected, vis);
            }
        }
    }
    int NumOfProvison(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<int> adjList[V];
        for(int i =0; i<V; i++){
            for(int j = 0; j<V; j++){
                if(isConnected[i][j] == 1 && i!=j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }
        vector<int> vis(V,0);
        int count =0;
        for(int i =0; i<V; i++){
            if(vis[i] == 0){
                count++;
                dfs(i,adjList,vis);
                
            }
        }
        return count;
    }
};
// logic call the dfs function for every vertex but that vertex not visited
