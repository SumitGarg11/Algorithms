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
     void leftViewSolve(vector<int> &ans, Node* root, int *max_level, int level){
         if(root==NULL) return;
         if(*max_level < level){
            ans.push_back(root->data);
            *max_level = level;
         }
         leftViewSolve(ans,root->left,max_level,level+1);
         leftViewSolve(ans,root->right,max_level,level+1);
     }
    vector<int> leftView(Node *root) {
        vector<int> ans;
        int max_level =0;
        leftViewSolve(ans,root,&max_level,1);
        return ans;
    }
};