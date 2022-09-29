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
    int sum = 0;
    int node_sum = 0;
    void helper(TreeNode *root)
    {
        if(root == NULL)
            return;
        helper(root -> left);
        sum += root -> val;
        helper(root -> right);
    }
    void change(TreeNode *root)
    {
        if(root == NULL)
            return;
        change(root -> left);
        node_sum += root -> val;
        root -> val = root -> val + sum - node_sum;
        change(root -> right);
        
    }
    TreeNode* bstToGst(TreeNode* root) {
        helper(root);
        change(root);
        cout << sum << endl;
        return root;
    }
};