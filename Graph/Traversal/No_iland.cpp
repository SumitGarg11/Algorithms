#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <queue>
using namespace std;

class Solution
{
public:
    void bfs(vector<vector<int>> &vis, vector<vector<char>> &grid, int row, int col)
    {
        vis[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        q.push({row, col});

        while (!q.empty())
        {
            int row_i = q.front().first;
            int col_i = q.front().second;
            q.pop();

            for (int delrow = -1; delrow <= 1; delrow++)
            {
                for (int delcol = -1; delcol <= 1; delcol++)
                {
                    int nbr_row = delrow + row_i;
                    int nbr_col = delcol + col_i;

                    if (nbr_row >= 0 && nbr_row < n && nbr_col >= 0 && nbr_col < m &&
                        !vis[nbr_row][nbr_col] && grid[nbr_row][nbr_col] == '1')
                    {
                        vis[nbr_row][nbr_col] = 1; // Mark as visited
                        q.push({nbr_row, nbr_col});
                    }
                }
            }
        }
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == '1')
                {
                    count++;
                    bfs(vis, grid, i, j);
                }
            }
        }
        return count;
    }
};
