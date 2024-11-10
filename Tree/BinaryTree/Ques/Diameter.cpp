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
    int solve(Node* root, int* h){
        int lh =0,rh=0;
        int ld = 0,rd =0;
        if(root == NULL){
            *h = 0;
            return 0;
        }
        ld = solve(root->left, &lh);
        rd = solve(root->right,&rh);
        *h = max(lh,rh)+1;
        return max(lh+rh+1,max(ld,rd));
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        int h=0;
        int d = solve(root,&h);
        return d;
    }
};