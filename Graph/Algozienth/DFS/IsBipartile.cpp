#include <bits/stdc++.h>
using namespace std;
// v , edges
int n, m;
vector<vector<int>> g; // Adj List
vector<int> vis;
// storing the node that is being visited
bool isBipartile = true;
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
            isBipartile = false;
            break;
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
        g[b].push_back(a);
    }
    vis.assign(n + 1, 0); // initialize all vertex as unvisited

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {

            dfs(i, 1);
        }
    }
    cout << isBipartile << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " : " << vis[i] << endl;
    }
}