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
    bool dfs(TreeNode *root, TreeNode *subroot)
    {
        if(!root or !subroot)
            return root == NULL and subroot == NULL;
        else if(root -> val != subroot -> val)
            return false;
        return dfs(root -> left, subroot -> left) and dfs(root -> right, subroot -> right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL)
            return false;
        if(dfs(root, subRoot))
            return true;
        return isSubtree(root -> left, subRoot) or isSubtree(root -> right, subRoot);
    }
};