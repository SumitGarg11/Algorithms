
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
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    { 
        if(root==NULL)
        return NULL;
       
       //Your code here 
       if(root->data == n1 || root->data == n2){
           return root;
       }
       Node* l = lca(root->left,n1,n2);
       Node* r = lca(root->right,n1,n2);
       if(l&&r){
           return root;
       }
       return (l!=NULL)?l:r;
    }
};