#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<int>> g;
vector<int> indeg;
vector<int> topo;
void kahnAlgo()
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        topo.push_back(curr);
        // no instead of delete the node that zero indegree , we decrese the indegree of nbr nodes
        for (auto v : g[curr])
        {
            indeg[v]--;
            if (indeg[v] == 0)
            {
                q.push(v);
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    g.resize(n + 1);
    indeg.assign(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        indeg[b]++;
    }
    kahnAlgo();
    for (auto v : topo)
    {
        cout << v << " ";
    }
}