class Solution {
public:
    int helper(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        int left = helper(root -> left);
        int right = helper(root -> right);
        if(left == 0)
            root -> left = NULL;
        if(right == 0)
            root -> right = NULL;
        
        if(left == 1 || right == 1)
            return 1;
        return root -> val;
    }
    TreeNode* pruneTree(TreeNode* root) {
        
        int check = helper(root);
        if(check == 0)
            return NULL;
        return root;
    }
};