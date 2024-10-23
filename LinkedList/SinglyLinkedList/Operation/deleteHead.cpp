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
Node* deleteHeadNode(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* temp = head;
    head=head->next;
    delete temp;
    return head;

}
Node* deleteTailNode(Node* &head, Node* &tail){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        tail = NULL;
        return head;
    }
    Node* secondLast = head;
    while(secondLast->next != tail){
        secondLast = secondLast->next;
    }
    
    secondLast->next = NULL;

    delete tail;
    tail = secondLast;
    return head;
}
Node* deleteNodeAtPos(Node* &head, Node* &tail, int pos){
    if(pos <0) cout <<"Invalid position"<<endl;
    if(pos == 0) return deleteHeadNode(head);
    int count = 1;
    Node* prev = head;
    while(count < pos -1 && prev != NULL){
        prev = prev->next;
        count++;
    }
    Node* temp = prev->next;
    prev->next = prev->next->next;
    temp->next= NULL;
    delete temp;
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
    deleteHeadNode(head);
    printNode(head);
    deleteTailNode(head,tail);
    printNode(head);
    deleteNodeAtPos(head,tail,2);
    printNode(head);
    
    
}