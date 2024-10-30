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
Node* createNode(int NodeLeft){
    if(NodeLeft==0) return NULL;
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    Node* node = new Node(data);
    NodeLeft--;
    if(NodeLeft>0){
        cout<<"Enter the left Node for this node "<<node->data<<"(-1 for not want left Node)  ";
        node->left = createNode(NodeLeft);
        cout<<"Enter the right Node for this node "<<node->data<<"(-1 for not want right Node)  ";
        node->right = createNode(NodeLeft);
    }
    return node;
}
void bfs(Node* root){
    if(root==NULL){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }

    }
}
void BFS(Node* root) {

    if (root == nullptr) return;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* node = q.front();
        q.pop(); 
        cout << node->data << " ";
        if (node->left != nullptr) q.push(node->left);
        if (node->right != nullptr) q.push(node->right);
        
    }
}
int main(){
    int N;
    cin>>N;
    Node* root = createNode(N);
    bfs(root);
}