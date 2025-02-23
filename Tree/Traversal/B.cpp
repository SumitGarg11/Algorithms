#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
Node *createTree(int NodeLeft)
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *node = new Node(data);
    NodeLeft--;
    if (NodeLeft > 0)
    {
        cout << "Enter the left node of this node " << node->data << "(-1 for the no node to be left)" << endl;
        node->left = createTree(NodeLeft);
        cout << "Enter the right node of this node " << node->data << "(-1 for the no node to be right)" << endl;
        node->right = createTree(NodeLeft);
    }
    return node;
}
void bfs(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        cout << node->data << " ";
        if (node->left != nullptr)
            q.push(node->left);
        if (node->right != nullptr)
            q.push(node->right);
    }
}
int main()
{
    int N;
    cin >> N;
    Node *root = createTree(N);
    bfs(root);
}