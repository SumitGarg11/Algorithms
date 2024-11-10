
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
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {   
        if(r1 == NULL && r2 == NULL){
            return 1;
        }
        if(r1->data != r2->data){
            return 0;
        }
        isIdentical(r1->left,r2->left);
        isIdentical(r1->right,r2->right);
    }
};