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
void  printRightBoundary(Node* node){
    if(node == NULL){
        return ;
    }
    if(node->right){
        printRightBoundary(node->right);
        cout<<node->data<<" ";
    }
    else if (node->left){
        
        printRightBoundary(node->left);
        cout<<node->data<<" ";
    }
}
void printLeftBoundary(Node* root){
    if(root == NULL){
        return ;
    }
    if(root->left){
        cout<<root->data<<" ";
        printLeftBoundary(root->left);
    }
    else if (root->right){
        cout<<root->data<<" ";
        printLeftBoundary(root->right);
    }
}
void printLeaves(Node* root){
    if(root==NULL){
        return;
    }
    printLeaves(root->left);
    if(!(root->left) && !(root->right)){
        cout<<root->data<<" ";
    }
    printLeaves(root->right);
    

}
void printBoundary(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    printLeftBoundary(root->left);
    printLeaves(root->left);
    printLeaves(root->right);
    printRightBoundary(root->right);
}
Node* createTree(int N){
    if(N==0) return NULL;
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    Node* node = new Node(data);
    N--;
    if(N>0){
        cout<<"Enter the Left Node of this node "<<node->data<<" (-1 for not want left Node)  ";
        node->left = createTree(N);
        cout<<"Enter the Right Node of this node "<<node->data<<" (-1 for not want right Node)  ";
        node->right = createTree(N);
    }
    return node;
}
int main(){
    int N;
    cin>>N;
    Node* root = createTree(N);
    printBoundary(root);
}