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
    int getKthFromLast(Node *head, int k) {

        // using two pointers, similar to finding middle element.
        Node *currNode = head, *kthNode = head;

        // traversing first k elements with first pointer.
        while (k != 0) {
            if (currNode == NULL)
                return -1;
            currNode = currNode->next;
            k--;
        }

        // now traversing with both pointers and when first pointer gives null
        // we have got the kth node from end in second pointer since the first
        // pointer had already traversed n nodes and thus had difference of n
        // nodes with second pointer.
        while (currNode != NULL) {
            kthNode = kthNode->next;
            currNode = currNode->next;
        }

        // returning the data of nth node from end.
        if (kthNode != NULL)
            return kthNode->data;
        else
            return -1;
    }
};