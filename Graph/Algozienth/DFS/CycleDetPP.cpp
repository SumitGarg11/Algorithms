#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<vector<int>> g;
vector<int> color;
vector<int> parent;
bool is_cycle = 0;
vector<int> any_cycle;
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

            // node -- v is a backward edge
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
            return;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    g.resize(n + 1);
    color.assign(n + 1, 1); // 1 is unvisited
    parent.assign(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    for (int i = 1; i <= n; i++)
    {
        dfs(i, 0);
    }
    for (auto v : any_cycle)
    {
        cout << v << " ";
    }
}