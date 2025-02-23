#include <bits/stdc++.h>
using namespace std;
TreeNode* fun(vector<int>&nums, int low , int right){
    if(low>right) return NULL;
    int mid=(low+right)/2;
    TreeNode* root=new TreeNode(nums[mid]);
    root->left=fun(nums,low,mid-1);
    root->right=fun(nums,mid+1,right);
    return root;  // return the root of the constructed BST
}
TreeNode* sortedArrayToBST(vector<int>& nums) {
        return fun(nums,0,nums.size()-1);
}