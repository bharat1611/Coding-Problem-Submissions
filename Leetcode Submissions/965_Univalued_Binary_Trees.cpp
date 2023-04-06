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
    
    bool dfs(TreeNode *root, int n)
    {
        if(root == NULL)
            return true;
        if(root -> val != n)
            return false;
        
        return dfs(root -> left, n) and dfs(root -> right, n);
        
    }
    bool isUnivalTree(TreeNode* root) {
        int n = root -> val;
        return dfs(root, n);
    }
};