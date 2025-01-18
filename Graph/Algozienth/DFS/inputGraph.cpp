#include <bits/stdc++.h>
using namespace std;
// Adj List 
// V    Nbr
// 1 - [2,3]
// 2 - [3]
// 3 - [1,4]
// 4 - []
int n,m; // n is vertex , m is edges ,
vector<vector<int>> g; // graph 
vector<int> vis; // store the visted nodes 
int main(){
    cin>>n>>m;
    g.resize(n+1);  // IMPORTANT : If you forget then run time error 
    for(int i =0; i<m ; i++){    // why loop take till only m , because m is edges 
        int a,b;
        cin>>a>>b;
        g[a].push_back(b); // if g is directed 
    }
    vis.assign(n+1,0);
}