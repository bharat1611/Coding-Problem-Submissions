class Solution {
public:
    int count = 0;
    void helper(TreeNode *root, vector<int> v)
    {
        if(root == NULL)
            return;
        v[root -> val]++;
        if(root -> left == NULL and root -> right == NULL)
        {
            int odd = 0;
            for(auto i: v)
            {
                if(i % 2 == 1)
                    odd++;
            }
            if(odd <= 1)
                count++;
            return;
        }
        helper(root -> left, v);
        helper(root -> right, v);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> v(10, 0);
        helper(root, v);
        return count;
    }
};