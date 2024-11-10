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
class Solution {
  public:
      // Your code here
    int isLeaf(Node* root){
        if(root == NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 1;
        }
        return 0;
    }
    bool isSumTree(Node* root) {
        if(root==NULL || isLeaf(root)){
            return 1;
        }
        int ls,rs;
        if(isSumTree(root->left) && isSumTree(root->right)){
            if(root->left == NULL){
                ls=0;
            }
            else if(isLeaf(root->left)){
                ls= root->left->data;
            }
            else {
                ls = 2*root->left->data;
            }
            
            if(root->right == NULL){
                rs=0;
            }
            else if(isLeaf(root->right)){
                rs= root->right->data;
            }
            else {
                rs = 2*root->right->data;
            }
            return (root->data == (ls+rs));
        }
        return 0;
        
    }
};