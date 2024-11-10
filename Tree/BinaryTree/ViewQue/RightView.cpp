
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



class Solution
{
    public:
    void solve(vector<int>&ans, Node* root, int *maxL, int level){
        if(root==NULL) return ;
        if(*maxL < level){
            ans.push_back(root->data);
            *maxL = level;
        }
        solve(ans,root->right,maxL,level+1);
        solve(ans,root->left,maxL,level+1);
        
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       int maxL = 0;
       vector<int> ans ;
       if(root==NULL){
           return ans;
       }
       solve(ans,root, &maxL,1);
       return ans;
    }
};