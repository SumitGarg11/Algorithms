#include <bits/stdc++.h>
using namespace std;
class Node{
    public: 
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
Node* insertAtHead(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        tail = newNode;
    }
    newNode->next = head;
    head=newNode;
    return head;
}
Node* insertAtTail(Node* &tail, Node* &head, int data){
    Node* newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}
void printNode(Node* head){
    if(head==NULL){
        return ;
    }
    Node* curr = head;
    while(curr != NULL ){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

Node* insertAtPos(Node* &head, Node* &tail, int pos, int data){
    if(pos <0){
        cout<<"Invalid position"<<endl;
        return head;
    }
    if(pos == 0){
        return insertAtHead(head,tail,data);
    }
    Node* newNode = new Node(data);
    Node* prev = head;
    int count= 1;
    while(count < pos-1 && prev!=NULL){
        prev = prev->next;
        count++;
    }
    newNode->next= prev->next;
    prev->next = newNode;

    return head;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        int data;
        cout<<"Enter the data of "<<i+1 <<" node = ";
        cin>> data ;
        // head= insertAtHead(head,tail,data);
      insertAtTail(tail,head,data);
    }
    
    printNode(head);
    insertAtTail(tail,head,1000);
    printNode(head);
    insertAtPos(head,tail,2,500);
    printNode(head);

}