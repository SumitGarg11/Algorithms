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
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
       if(!head) return false;
       Node* fast = head;
       Node* slow = head;
       while(fast && fast->next){
           
           fast=fast->next->next;
           slow = slow->next;
           if(fast== slow) return true;
       }
       return false;
    }
};