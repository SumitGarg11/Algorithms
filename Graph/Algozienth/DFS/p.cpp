#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<int>> g;
vector<int> vis;
bool isBarptile = true;
void dfs(int node, int color)
{
    vis[node] = color;
    for (auto v : g[node])
    {
        if (!vis[v])
        {
            dfs(v, 3 - color);
        }
        else if (vis[v] == vis[node])
        {
            isBarptile = false;
            break;
        }
    }
}
void solve()
{
    cin >> n >> m;
    g.resize(n + 1);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    vis.assign(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i, 1);
        }
    }
    if (isBarptile)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    solve();
}