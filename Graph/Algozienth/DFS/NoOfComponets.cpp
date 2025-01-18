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
        g[b].push_back(a);
    }
    vis.assign(n + 1, 0); // initialize all vertex as unvisited
    int no_Of_Compo = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            no_Of_Compo++;
            
            dfs(i);
        }
    }
    cout << no_Of_Compo << endl;
}