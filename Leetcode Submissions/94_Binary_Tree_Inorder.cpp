#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> inorder;
    
    void helper(TreeNode *root)
    {
        if(root == NULL)
            return;
        else
        {
            helper(root -> left);
            inorder.push_back(root -> val);
            helper(root -> right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        helper(root);
        return inorder;
    }
};