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
class Solution{
public:
    void del(TreeNode *curr, TreeNode *prev, int target, char dir)
    {
        if (!curr)
            return;
        del(curr -> left, curr, target, 'l');
        del(curr -> right, curr, target, 'r');
        if (curr -> left == NULL && curr -> right == NULL && curr -> val == target)
        {
            if (dir == 'l')
                prev -> left = NULL;
            else
                prev -> right = NULL;
        }
    }

    TreeNode *removeLeafNodes(TreeNode *root, int target)
    {
        del(root, root, target, '0');
        if (root -> left == NULL && root -> right == NULL && root -> val == target)
            return NULL;
        return root;
    }
};