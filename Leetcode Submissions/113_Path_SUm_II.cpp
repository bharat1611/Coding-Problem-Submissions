class Solution {
public:
    vector<vector<int>> ans;  
    void helper(TreeNode *root, int targetSum, vector<int> level, int sum)
    {
        if(root == NULL)
            return;
        sum += root -> val;
        level.push_back(root -> val);
        if(root -> left == NULL and root -> right == NULL and sum == targetSum)
        {
            ans.push_back(level);
            sum = 0;
            level.clear();
            return;
        }
        helper(root -> left, targetSum, level, sum);
        helper(root -> right, targetSum, level, sum);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> level;
        helper(root, targetSum, level,0);
        return ans;
    }
};