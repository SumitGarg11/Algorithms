#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<int>> g;
vector<int> vis;
vector<int> temp;
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
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    vis.assign(n + 1, 0);
    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << vis[i] << endl;
        // i print is the vertex , vis[i] prints 1,0 visted or not 
    } 

    for (auto v : temp)
    {
        cout << v << " ";
        // v print is the vertex that visted only once 
    }
}
