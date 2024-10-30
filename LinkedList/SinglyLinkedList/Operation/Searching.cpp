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
// function for traversing
bool SaerchingTarget(Node* head,int target){
    if(head==NULL && head-> next==NULL ){
        return false;
    }
    Node* curr = head;
    while(curr != NULL){
        if(curr->data == target){
            return true;
        }
       
        curr = curr->next;
    }
    return false;
}
int main(){

}