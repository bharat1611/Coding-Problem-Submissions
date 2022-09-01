class Solution {
public:
    vector<int> v;
    void helper(TreeNode *root)
    {
        if(!root)
            return;
        helper(root -> left);
        v.push_back(root -> val);
        helper(root -> right);
    }
    int getMinimumDifference(TreeNode* root) {
        helper(root);
        
        int min = INT_MAX;
        for(int i = 1;i < v.size(); i++)
        {
            if(abs(v[i] - v[i - 1]) <= min)
                min = abs(v[i] - v[i - 1]);
        }
        return min;  
    }
};