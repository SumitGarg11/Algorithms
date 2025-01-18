// all result store in vis array
// size of components , set of components, vertex belong from which componets
#include <bits/stdc++.h>
using namespace std;
int n, m; // v,edges
vector<vector<int>> g;
vector<int> vis;
void dfs(int node, int compon)
{
    vis[node] = compon;
    for (auto v : g[node])
    {
        if (!vis[v])
        {
            dfs(v, compon);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    g.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vis.assign(n + 1, 0);
    int no_of_components = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            no_of_components++;
            dfs(i, no_of_components);
        }
    }
    vector<vector<int>> components;
    components.resize(no_of_components + 1);
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << vis[i] << endl;
        components[vis[i]].push_back(i);
    }
    for (auto row : components)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}