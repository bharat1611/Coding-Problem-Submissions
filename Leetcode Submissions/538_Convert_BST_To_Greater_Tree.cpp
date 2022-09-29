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
    int total_sum =0;
    int node_sum = 0;
    void inorder(TreeNode *root)
    {
        if(root == NULL)
            return;
        inorder(root -> left);
        total_sum += root -> val;
        inorder(root -> right);
    }
    void helper(TreeNode *root)
    {
        if(root == NULL)
            return;
        helper(root -> left);
        node_sum += root -> val;
        root -> val += total_sum - node_sum;
        helper(root -> right);
    }
    TreeNode* convertBST(TreeNode* root) {
        inorder(root);
        helper(root);
        return root;
    }
};