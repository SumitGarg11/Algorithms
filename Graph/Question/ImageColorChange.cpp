#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   void dfs(int sr, int sc, vector<vector<int>>&ans, vector<vector<int>>&image, int initC, int nColor, int drow[], int dcol[]){
      ans[sr][sc] = nColor;
      int n = image.size();
      int m = image[0].size();
      for(int i =0; i<4; i++){
        int nrow = sr+drow[i];
        int ncol = sc + dcol[i];
        if(nrow >=0 && nrow <n && ncol >=0 && ncol < m && ans[nrow][ncol] != nColor && image[nrow][ncol] == initC){
            dfs(nrow, ncol, ans,image,initC, nColor, drow,dcol);
        }
      }
   }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // requirements 
        // image ki copy bna lo usme change kar lege then return kar le ge 
        // init Color ko store kar lo taki check kar le 
        // 4 direction m hii jana hai 
        // drow[],dcol,
        // bss dfs call kar do 
        int initColor = image[sr][sc];
        vector<vector<int>> ans = image;
        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,+1,0,-1};

        dfs(sr,sc, ans, image, initColor, color,drow,dcol);
        return ans;
    }
};
