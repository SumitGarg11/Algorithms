#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; // n is number of nodes , m is number of edges
    cin >> n >> m;
    int adj[n+1][n+1];
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // since it's an undirected graph
    }
  return 0;
}