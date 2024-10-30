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
Node* createTree(int &N){
    if(N == 0){
        return NULL;
    }
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    Node* root = new Node(data);
    N--;
    if(N>0){
        cout<<"Enter the Right Node of this Node "<<root->data<<" (-1 for not want) ";
        root->right = createTree(N);
    }
    
    return root;
}
void inorder(Node* root){
    if(root == NULL){
        return;
    }
   
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    int N;
    cin>>N;
    Node* root = createTree(N);
    inorder(root);
    
}