#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        // requirements
        // no of row ? , no of col 
        // make a visted array [no of row ] [ no ol col ]
        // queue < r,c,time> store kar lu 

        // Logic kya hai 
        // index of row,col, time ko store karne k liye queue bna li 
        // fresh orange ko count karne k liye variable bna liya 
        // abb ak rotten orange find k liue condition likh di simple 
        // agar statement true hoti hai tho app uss index ko store kra lo ;
        // again i not want to come at same index so vis array bna lo

        int n = grid.size();
        int m = grid[0].size();
        int vis[n][m];
        queue<pair<pair<int,int>,int>> q;  // {{r,c},tm}
        int countFresh = 0;
        for(int i = 0; i<n; i++){
            for(int j =  0; j<m; j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                }
                else {
                    vis[i][j] = 0;
                }
                if(grid[i][j] == 1) countFresh++;
            }
        }
        int tm = 0;
        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,+1,0, -1};
        int cnt = 0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(tm,t);
            q.pop();
            for(int i =0; i<4; i++){
                int nrow = r+drow[i];
                int ncol = c+dcol[i];
                if(nrow >=0 && nrow < n && ncol >=0 && 
                ncol <m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1 
                ){
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol] = 2;
                    cnt++;
                }

            }
        }
        if(cnt != countFresh) return -1;
        return tm;
    }
};
//  Input: grid = [[2,1,1],[1,1,0],[0,1,1]]
//   Output: 4
//   2 1 1  ist row m 2 rotten oranges 1, 1, fresh oranges 
//   1 1 0  1 ,1 fresh oranges, 0 no oranges 
//   0 1 1  0 , no oranges , 1,1, fresh oranges 