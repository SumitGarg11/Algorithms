#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
vector<int> fun(vector<int> &v, int k){
    unordered_map<int,int> mpp;
    for(auto it:v){
        mpp[it]++;
    }
    priority_queue<P,vector<P>, greater<P>> pq;
    for(auto it : mpp){
        int v = it.first;
        int f = it.second;
        pq.push({f,v});
        if(pq.size() > k){
            pq.pop();
        }

    }
    vector<int> ans;
    while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int k;cin>>k;
    vector<int> v(n);
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    vector<int> ans = fun(v,k);
    for(auto it : ans){
        cout<<it<<" ";
    }


}
