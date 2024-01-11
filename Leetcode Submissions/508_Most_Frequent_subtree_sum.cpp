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
    unordered_map<int, int> mp; 
    int maxFreq = 0;
    int helper(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int left = helper(root -> left);
        int right = helper(root -> right);
        int sum = root-> val + left + right;
        mp[sum]++;
        maxFreq = max(maxFreq, mp[sum]);
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        int sum = 0;
        vector<int> ans;
        helper(root);
        for(auto x : mp){
            if(x.second == maxFreq)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};