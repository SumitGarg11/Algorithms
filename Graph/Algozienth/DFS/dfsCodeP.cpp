#include <bits/stdc++.h>
using namespace std;
// v , edges
int n, m;
vector<vector<int>> g; // Adj List
vector<int> vis;
vector<int> temp; // storing the node that is being visited

void dfs(int node)
{
    temp.push_back(node);
    vis[node] = 1;
    for (auto v : g[node])
    {
        if (!vis[v])
        {
            dfs(v);
        }
    }
}
int main()
{
    cin >> n >> m;
    g.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        // take how many edges
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    vis.assign(n + 1, 0); // initialize all vertex as unvisited
    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << vis[i] << endl; // print the vertex with the visted or not visited
    }
    for (auto v : temp)
    {
        cout << v << " "; // print the order of the nodes being visited
    }
}