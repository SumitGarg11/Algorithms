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


void DeleteNodeAtHead(Node* &head, Node* &tail){
    if(head == NULL){
        return ;
    }
    Node* temp = head;
    head = head->next;

    delete temp;
}
void DeleteNodeAtTail(Node* &head, Node* &tail){
    if(head == NULL){
        return ;
    }
    Node* temp = tail;
    tail=tail->prev;
    tail->next=NULL;
    
    delete temp;
}
void DeleteNodeAtPos(Node* &head,int pos, Node* &tail){
    if(head == NULL){
        return ;
    }
   if(pos < 0){
    cout<<"Invalid position"<<endl;
        return;
    }
    if(pos == 0){
        DeleteNodeAtHead(head,tail);
        return;
    }
    Node* curr = head;
    int count = 1;
    while(count < pos-1 && curr!=NULL){
        curr = curr->next;
        count++;
    }
    if(curr == NULL){
        cout<<"Invalid position"<<endl;
        return;
    }
    Node* dT = curr->next;
    curr->next = dT->next;
    dT->prev=NULL;
    dT->next->prev = curr;
    dT->next=NULL;
    delete dT;
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
    DeleteNodeAtHead(head,tail);
   traverseForward(head,tail);
   DeleteNodeAtTail(head,tail);
   traverseForward(head,tail);
    DeleteNodeAtPos(head,3,tail);
    traverseForward(head,tail);

}