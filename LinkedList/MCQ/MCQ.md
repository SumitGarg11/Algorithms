# What does the following function do for a given Linked List with first node as head?

```bash
void fun1(struct node* head)
{
  if(head == NULL)
    return;
  
  fun1(head->next);
  printf("%d  ", head->data);
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

public:
    void fun(TreeNode* root, vector<int> &ans){
        if(!root){
            return ;
        }
        fun(root->left,ans);
        ans.push_back(root->val);
        fun(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>  ans;
        fun(root,ans);
        return ans;
    }
};
  Output 
  Prints all nodes of linked list in reverse order
```


# Which of the following points is/are true about Linked List data structure when it is compared with array?

```bash
Arrays have better cache locality that can make them better in terms of performance.


It is easy to insert and delete elements in Linked List


Random access is not allowed in a typical implementation of Linked Lists


The size of array has to be pre-decided, linked lists can change their size any time.

Right Ans
All of the above
```

