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
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool solve(Node* root, int *height){
        int lh=0,rh=0;
        int leftSide =0,rightSide=0;
        
        
        if(root == NULL){
            *height = 0;
            return 1;
        }
        leftSide = solve(root->left,&lh);
        rightSide = solve(root->right,&rh);
        *height = (lh > rh ? lh : rh) + 1 ;
        if((lh-rh)>=2 || (rh-lh)>=2) return 0;
        else 
        return leftSide&&rightSide;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
       int h = 0;
       return solve(root,&h);
    }
};