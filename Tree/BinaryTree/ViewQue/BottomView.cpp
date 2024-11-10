#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution {
  public:
   
    vector <int> bottomView(Node *root) {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        queue<pair<Node* , int>>q;
        map<int,int> mp;
        q.push({root,0});
        while(!q.empty()){
            Node* temp = q.front().first;
            int d = q.front().second;
            q.pop();
            mp[d] = temp->data;
            if(temp->left != NULL){
                q.push({temp->left,d-1});
            }
            if(temp->right != NULL){
                q.push({temp->right,d+1});
            }
        }
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};