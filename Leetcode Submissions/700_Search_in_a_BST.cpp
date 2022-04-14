#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        if(root == NULL)                // if root is NULL, return NULL
            return NULL;   
        if(root->val == val)            // return root if val is found
            return root;
        if(root -> val > val)           // if in BST, val is smaller than root->val, then go left
            return searchBST(root ->left, val);
        return searchBST(root -> right, val);      // if none of the above then the value must be greater, go right     
    }
};