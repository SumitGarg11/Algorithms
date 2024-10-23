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
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        
        Node* fast = head;
        Node* slow = head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow->data;
        
    }
};