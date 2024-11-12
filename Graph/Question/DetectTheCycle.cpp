#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool detect(int scrRoot, vector<int>& vis, vector<vector<int>>& adj) {
        vis[scrRoot] = 1;
        queue<pair<int, int>> q;
        q.push({scrRoot, -1});
        
        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();  // Remove the processed node from the queue
            
            for (auto nbr : adj[node]) {
                if (!vis[nbr]) {
                    vis[nbr] = 1;
                    q.push({nbr, node});
                } else if (parent != nbr) {
                    return true; // cycle exists
                }
            }
        }
        return false;
    }

    bool isCycle(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> vis(V, 0);
       
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (detect(i, vis, adj)) return true;
            }
        }
        return false;
    }
};
