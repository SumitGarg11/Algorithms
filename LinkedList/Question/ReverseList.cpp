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

class Solution {
  public:
    Node* reverseLL(Node* head){
        Node* prev=NULL;
        Node* curr = head;
        while(curr!=NULL){
            Node* newNode= curr->next;
            curr->next = prev;
            prev = curr;
            curr=newNode;
        }
        return prev;
    }
    // Function to reverse a linked list.
    struct Node* reverseList(struct Node* head) {
        head = reverseLL(head);
        return head;
    }
};