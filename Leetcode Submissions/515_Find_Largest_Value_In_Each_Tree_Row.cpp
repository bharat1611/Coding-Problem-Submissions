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
    vector<int> largestValues(TreeNode* root) {
        if(root == NULL)
            return {};
        
        queue<TreeNode *> q;
        q.push(root);
        vector<int> ans;
        int level = INT_MIN;
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0 ; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                level = max(level, node -> val);
                if(node -> left)
                    q.push(node -> left);
                if(node -> right)
                    q.push(node -> right);
            }
            ans.push_back(level);
            level = INT_MIN;
        }
        return ans;
    }
};