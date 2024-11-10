#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root == NULL) return ans;
        
        queue<pair<Node*,int>> q;
        q.push({root,0});
        map<int,int> mp;
        Node* temp =NULL;
        while(!q.empty()){
            temp=q.front().first;
            int d = q.front().second;
            q.pop();
            if(mp.find(d) == mp.end()){
                mp[d] = temp->data;
            }
            if(temp->left){
                q.push({temp->left,d-1});
            }
            if(temp->right){
                q.push({temp->right,d+1});
            }
        }
        for(auto it = mp.begin(); it!=mp.end(); it++){
            ans.push_back(it->second);
        }
        return ans;
    }

};
