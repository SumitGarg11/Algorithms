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
        if(head==NULL) return NULL;
        Node* prev = NULL;
        Node* curr = head;
        while(curr != NULL){
            Node* newNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr=newNode;
        }
        return prev;
        
    }
    bool isSame(Node* head, Node* head2){
        while(head && head2){
            if(head->data != head2->data){
                return false;
            }
            head=head->next;
            head2=head2->next;
        }
        return true;
    }
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        Node* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp=temp->next;
        }
        int mid_point = (len-1)/2;
        temp = head;
        while(mid_point--){
            temp=temp->next;
        }
        Node* head2 = temp->next;
        temp->next = NULL;
        head2 = reverseLL(head2);
        bool ans = isSame(head,head2);
        return ans;
        
        
    }
};