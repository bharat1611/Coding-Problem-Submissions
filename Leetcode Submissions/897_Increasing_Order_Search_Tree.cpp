#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void counter(TreeNode* root, vector<int> &value)
    {
        if(root == NULL)
            return;
        counter(root->left, value);
        value.push_back(root->val);
        counter(root->right, value);
    }
    
    TreeNode* increasingBST(TreeNode* root)
    {
        if(root ==NULL)
            return root;
        
        vector<int> value;
        counter(root, value);
        
        TreeNode *ans = new TreeNode(value[0]);
        TreeNode *temp = ans;
        
        for(int i = 1; i < value.size(); i++)
        {
            temp ->right = new TreeNode(value[i]);
            temp = temp -> right;
        }
        return ans;
    }
};