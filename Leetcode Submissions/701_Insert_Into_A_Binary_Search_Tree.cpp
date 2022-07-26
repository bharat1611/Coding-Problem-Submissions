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
    void helper(TreeNode *root, int val)
    {
        if(root == NULL)
            return;
        
        if(val < root -> val and root -> left != NULL)
            helper(root -> left, val);
        else if(val < root -> val and root -> left == NULL)
        {
            root -> left= new TreeNode(val);
            return;
        }
        
        if(val > root -> val and root -> right != NULL)
            helper(root -> right, val);
        else if(val > root -> val and root -> right == NULL)
        {
            root -> right = new TreeNode(val);
            return;
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL)
            return new TreeNode(val);
        helper(root, val);
        return root;
        
    }
};