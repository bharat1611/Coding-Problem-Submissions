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
    vector<int> v;
    void helper(TreeNode *root)
    {
        if(root == NULL)
            return;
        helper(root -> left);
        v.push_back(root -> val);
        helper(root -> right);
    }
    vector<int> findMode(TreeNode* root) {
        helper(root);
        unordered_map<int, int>mp;
        vector<int> ans;
        for(int i = 0 ; i < v.size(); i++)
            mp[v[i]]++;
        int max_f = 0;
        for(auto i : mp)
        {
            if(i.second >= max_f)
                max_f = i.second;
        }
        for(auto i : mp)
        {
            if(i.second == max_f)
                ans.push_back(i.first);
        }
        return ans;
    }
};