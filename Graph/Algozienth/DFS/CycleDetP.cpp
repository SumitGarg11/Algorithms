#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
vector<int> color;
vector<int> parent;
vector<int> any_cycle;
bool is_cycle = 0;
void dfs(int node, int par)
{
    parent[node] = par;
    color[node] = 2;
    for (auto v : g[node])
    {
        if (color[v] == 1)
        {
            dfs(v, node);
        }
        else if (color[v] == 2)
        {
            // node ---- v backward edges
            if (is_cycle == 0)
            {
                int temp = node;
                while (temp != v)
                {
                    any_cycle.push_back(temp);
                    temp = parent[temp];
                }
                any_cycle.push_back(temp);
                reverse(any_cycle.begin(), any_cycle.end());
            }
            is_cycle = 1;
        }
    }
    color[node] = 3;
}
int main()
{
    int n, m;
    cin >> n >> m;
    g.resize(n + 1);
    color.assign(n + 1, 1); // 1 is un visted
    parent.assign(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    // what if components are not connected
    for (int i = 1; i <= n; i++)
    {
        dfs(i, 0);
    }
    for (auto v : any_cycle)
    {
        cout << v << " ";
    }
}