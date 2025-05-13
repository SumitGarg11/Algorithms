#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
    long long res = 1;
    for(int i = 0; i<r; i++){
        res = res * (n - i);
        res = res / (i+1);
    }
    return res;c
}
vector<vector<int>> passcalT(int n){
    vector<vector<int>> ans;
    for(int row = 1; row<=n; row++){
        vector<int> tempLst;
        for(int col = 1; col<=row; col++){
            tempLst.push_back(nCr(row-1,col-1));
        }
        ans.push_back(tempLst);
    }
    return ans;

}
int main(){
   int n = 5;
   vector<vector<int>> ans = passcalT(n);
   for(auto it: ans){
    for(auto elem : it){
        cout<<elem << " ";
    }
    cout<<"\n";
   }
}