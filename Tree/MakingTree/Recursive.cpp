#include <bits/stdc++.h>
using namespace std;



// create the Node;
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
Node* createTree(){
    int data;
    cin>>data;
    if(data==-1) return NULL;
    Node* node = new Node(data);
    cout<<"Enter The Left Node of this node "<< node->data << "(-1 for no left Node Want):   ";
    node->left = createTree();
    cout<<"Enter The Right Node of this node "<< node->data << " (-1 for no right Node Want):   ";
    node->right = createTree();
    return node;
    
}

void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right); 
}

int main(){
    
    Node* root = createTree();
    cout<<"Inorder Traversal: ";
    inOrder(root);
    cout<<endl;

    return 0;
}