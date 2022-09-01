class Solution {
public:
    vector<int> v;
    void helper(TreeNode *root)
    {
        if(root == NULL)
            return;
        
        helper(root -> left);
        v.push_back(root -> val);
        helper(root -> right);
    }
    int minDiffInBST(TreeNode* root) {
        helper(root);
        int min = INT_MAX;
        for(int i = 1 ; i < v.size() ; i++)
        {
            if(v[i] - v[i - 1] <= min)
                min = v[i] - v[i - 1];
        }
        return min;
    }
};