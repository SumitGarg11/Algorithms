#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
       int data;
       Node* next;
       Node* prev;
       Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;  
       }  
};
void insertAtHead(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    
}
void insertAtTail(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next= newNode;
        newNode->prev = tail;
        tail= newNode;
    }
    
}
void insertAtpos(Node* &head, Node* &tail, int pos, int data){
    Node* newNode = new Node(data);
    if(pos <0){
        cout<<"Invalid position"<<endl;
        return;
    }
    if(pos == 0){
        return insertAtHead(head, tail, data);
    }
    if(pos == 5){
        return insertAtTail(head, tail, data);
    }
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        int count = 1;
        Node* temp = head;
        while(count <= pos ){
            temp = temp->next;
            count++;
        }
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = temp->next->next;

    }

}
void traverseForward(Node* head, Node* tail){
    if(head==NULL) return;
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void traverseBackward(Node* head, Node* tail){
    if(head==NULL) return;
    Node* temp = tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int data;
        cout<<"Enter the data of "<<i+1<<" node = ";
        cin>>data;
        insertAtHead(head, tail, data);
    }
    traverseForward(head,tail);
    insertAtTail(head, tail, 2000);
    traverseForward(head,tail);
    insertAtpos(head, tail, 2, 500);
    traverseForward(head,tail);
    insertAtpos(head, tail,5,7000);
    traverseForward(head,tail);
    insertAtpos(head, tail,0,1000);
    traverseForward(head,tail);
    
}