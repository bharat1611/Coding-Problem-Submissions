#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> pre;
    void helper(TreeNode *root)
    {
        if(root == NULL)
            return;
        else
        {
            pre.push_back(root -> val);
            helper(root -> left);
            helper(root -> right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        helper(root);
        return pre;
        
    }
};