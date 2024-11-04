
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
//   public:
//     // Function to return Breadth First Traversal of given graph.
//     vector<int> bfsOfGraph(int V, vector<int> adj[]) {
//         vector<int> vis(V,0); 
//         vis[0] = 1; 
//         queue<int> q;
//         // push the initial starting node 
//         q.push(0); 
//         vector<int> bfs; 
//         // iterate till the queue is empty 
//         while(!q.empty()) {
//            // get the topmost element in the queue 
//             int node = q.front(); 
//             q.pop(); 
//             bfs.push_back(node); 
//             // traverse for all its neighbours 
//             for(auto it : adj[node]) {
//                 // if the neighbour has previously not been visited, 
//                 // store in Q and mark as visited 
//                 if(!vis[it]) {
//                     vis[it] = 1; 
//                     q.push(it); 
//                 }
//             }
//         }
//         return bfs; 
//     }
// };

// void addEdge(vector <int> adj[], int u, int v) {
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }

// void printAns(vector <int> &ans) {
//     for (int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }
// }

// int main() 
// {
//     int n,m;
//     cin>>n>>m;
//     vector <int> adj[n+1];
//     for(int i =0; i<m; i++){
//         int u, v;
//         cin>>u>>v;
//         addEdge(adj,u,v);
//     }
    

//     Solution obj;
//     vector <int> ans = obj.bfsOfGraph(n, adj);
//     printAns(ans);

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> bfs(vector<int> adj[], int V){
        vector<int> vis(V,0);
        queue<int> q;
        vis[0] = 1;
        q.push(0);
        vector<int> ans;
        while(!q.empty()){
            int node = q.front();
            ans.push_back(node);
            q.pop();
            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return ans;
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Solution obj;
    vector<int> ans = obj.bfs(adj,n);
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;

}