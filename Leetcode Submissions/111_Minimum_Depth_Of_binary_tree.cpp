class Solution {
public:
    
    void helper(TreeNode *root, const int curr_level, int &min_level)
    {
        if(root == NULL || curr_level >= min_level)
            return;
        if(root -> left == NULL and root -> right == NULL)
        {
            min_level = min(min_level, curr_level);
            return;
        }
        helper(root -> right, curr_level + 1, min_level);
        helper(root -> left, curr_level + 1, min_level);  
    }
    
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int min_level = INT_MAX;
        helper(root, 1, min_level);
        return min_level;
    }
};