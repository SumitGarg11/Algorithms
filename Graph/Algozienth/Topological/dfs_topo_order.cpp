#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<int>> g;
vector<int> vis;
vector<int> topo;

void dfs(int node)
{
    vis[node] = 1;
    for (auto v : g[node])
    {
        if (!vis[v])
        {
            dfs(v);
        }
    }
    topo.push_back(node);
}
int main()
{
    cin >> n >> m;
    g.resize(n + 1);
    vis.assign(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    reverse(topo.begin(), topo.end());
    for (auto v : topo)
    {
        cout << v << " ";
    }
    return 0;
}