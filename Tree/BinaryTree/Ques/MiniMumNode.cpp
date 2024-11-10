

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
    int minValue(Node* root) {
        // base case
        if (root == NULL)
            return -1;

        struct Node* current = root;

        // leftmost node is minimum so we move in BST till left node is not NULL.
        while (current->left != NULL) {
            current = current->left;
        }
        
        return (current->data);
    }
};