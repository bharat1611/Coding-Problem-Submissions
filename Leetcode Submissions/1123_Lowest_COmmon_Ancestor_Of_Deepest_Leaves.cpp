class Solution {
public:
    TreeNode *ans = NULL;
    int deepest = INT_MIN;
    int traverse(TreeNode *root, int level)
    {
        int left_height = level, right_height = level;
        
        if(root -> left)
            left_height = traverse(root -> left, level + 1);
        if(root -> right)
            right_height = traverse(root -> right, level + 1);
        
        deepest = max(deepest, level);
        if(left_height == deepest and right_height == deepest)
            ans = root;
        
        return max(left_height, right_height);
        
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        traverse(root, 0);
        return ans;
    }
};