#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        if(matrix.size() == 0){
            return {};
        }
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int dir = 0;
        // dir = 0  left to right
        // dir = 1  top to down
        // dir = 2  right to left
        // dir = 3  down to top

        int top = 0;
        int down = m-1;
        int left = 0;
        int right = n-1;
        while(top<= down && left <= right){
            if(dir == 0){
                // constant (row) top
                // move left to right
                for(int i =left; i<=right; i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            if(dir == 1){
                // move top to down 
                // constant  col  (Right)
                for(int i =top ; i<= down; i++){
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }
            if(dir == 2){
                // move to right to left 
                // constant (row) down
                for(int i =right; i>=left; i--){
                    ans.push_back(matrix[down][i]);
                }
                down --;
            }
            if(dir == 3){
                // move down to top
                // constant col left
                for(int i =down; i>= top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
           dir = (dir+1)%4;
        }
        return ans;
    }
};