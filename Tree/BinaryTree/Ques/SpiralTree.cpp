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

vector<int> findSpiral(Node* root) {
    vector<int> ans;
    if (root == nullptr)
        return ans;

    vector<Node*> q;
    q.push_back(root);
    bool f = false; // first we have to move from right to left
    while (!q.empty()) {
        vector<int> temp;
        vector<Node*> curr;
        for (Node* node : q) {
            temp.push_back(node->data);
            if (node->left)
                curr.push_back(node->left);
            if (node->right)
                curr.push_back(node->right);
        }
        if (f) { // moving from left to right then simply add temp to ans
            ans.insert(ans.end(), temp.begin(), temp.end());
            f = false;
        } else {
            // moving from right to left then reverse the temp array and add to ans
            ans.insert(ans.end(), temp.rbegin(), temp.rend());
            f = true;
        }
        q = curr;
    }

    return ans;
}