class Solution {
public:
    vector<int> v;
    void helper(TreeNode *root)
    {
        if(root == NULL)
            return;
        v.push_back(root -> val);
        if(root -> left) helper(root -> left);
        if(root -> right) helper(root -> right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        helper(root1);
        helper(root2);
        sort(v.begin(), v.end());
        return v;
    }
};