#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

vector<int> spiral(Node* root) {
    if (root == NULL) return {};  // Return an empty vector if root is null

    vector<int> ans;
    vector<Node*> q;
    q.push_back(root);
    bool f = false; // to alternate between left to right and right to left

    while (!q.empty()) {
        vector<int> temp;
        vector<Node*> curr;

        for (int i = 0; i < q.size(); i++) {
            Node* node = q[i];
            temp.push_back(node->data);
            if (node->left) {
                curr.push_back(node->left);
            }
            if (node->right) {
                curr.push_back(node->right);
            }
        }

        if (f) {
            // left to right 
            ans.insert(ans.end(), temp.begin(), temp.end());
            f = false;
        } else {
            // right to left
            ans.insert(ans.end(), temp.rbegin(), temp.rend());
            f = true;
        }

        q = curr;
    }
    
    return ans;
}

vector<int> findSpiral(Node *root) {
    return spiral(root);  // Correct function call
}
