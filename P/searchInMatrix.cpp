#include <bits/stdc++.h>
using namespace std;
bool fun(vector<vector<int>>&v, int target){
    int n = v.size();
    int m = v[0].size();
    int start = 0;
    int end = n*m -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        int i = mid / m;
        int j = mid % m;
        if(v[i][j] < target){
            start = mid + 1;
        }
        else if(v[i][j] > target){
            end = mid - 1;
        }
        else return true;
    }
    return false;
}
int main(){
    int n,m;
    cout<< "n : ";
    cin>>n;
    cout<<" m: ";
    cin>>m;

    vector<vector<int>>v(n,vector<int> (m));
    for(int i =0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>v[i][j];
        }
    }
    int target = 5;
    bool ans = fun(v,target);
    cout<<ans;

}