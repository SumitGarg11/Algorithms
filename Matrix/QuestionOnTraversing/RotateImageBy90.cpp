#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // simaple easy problem hai 
        // phale Matrix  Transposition kar le ge 
        // [1,2,3] --> [1]
        //             [2]
        //             [3]
        int n = matrix.size();
        for(int i =0; i<n; i++){
            for(int j =0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        } 
        // reverse kar do hmari matrix ko 
        // [1,4,7] --> [7,4,1]
        for(int i =0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }              
    }
};