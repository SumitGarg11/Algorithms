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
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
          vector<int> res;
          if(root==NULL) return res;
          queue<pair<Node*,int>> q;
          q.push({root,0});
          map<int, vector<int>> mp;
          while(!q.empty()){
              pair<Node* ,int> temp = q.front();
              Node* temp_root = temp.first;
              int d = temp.second;
              mp[d].push_back(temp_root->data);
              q.pop();
              if(temp_root->left){
                  q.push({temp_root->left,d-1});
              }
              if(temp_root->right){
                  q.push({temp_root->right,d+1});
              }
              
          }
          for(auto it: mp){
              vector<int>ans= it.second;
              for(auto x: ans){
                  res.push_back(x);
              }
          }
          return res;
    }
};