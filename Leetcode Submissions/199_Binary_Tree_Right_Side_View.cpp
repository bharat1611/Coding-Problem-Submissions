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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL)
            return {};
        vector<int> level;
        vector<int> ans;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0 ; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                level.push_back(node -> val);
                if(node -> left)
                    q.push(node -> left);
                if(node -> right)
                    q.push(node -> right);
            }
            int x = level.size();
            ans.push_back(level[x - 1]);
        }
        return ans;
    }
};