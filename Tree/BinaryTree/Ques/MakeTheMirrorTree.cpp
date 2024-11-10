
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
    // Function to convert a binary tree into its mirror tree.
   
void mirror(struct Node* node) {
    if (node == NULL)
        return; // base case: if node is NULL, return

    else {
        struct Node* temp;

        /* recursively call mirror function on the left and right subtrees */
        mirror(node->left);
        mirror(node->right);

        /* swap the pointers in this node to mirror it */
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}
};

