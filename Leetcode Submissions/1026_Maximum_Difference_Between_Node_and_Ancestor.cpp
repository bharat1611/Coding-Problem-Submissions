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
    int max_all = INT_MIN;
    void dfs(TreeNode *root, int min_tree, int max_tree)
    {
        if(root == NULL)
            return;
        min_tree = min(min_tree, root -> val);
        max_tree = max(max_tree, root -> val);
        dfs(root -> left, min_tree, max_tree);
        dfs(root -> right, min_tree, max_tree);
        
        max_all = max(max_all, max(abs(root -> val - min_tree), abs(root -> val - max_tree)));
        
    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root, INT_MAX, INT_MIN);
        return max_all;
        
    }
};