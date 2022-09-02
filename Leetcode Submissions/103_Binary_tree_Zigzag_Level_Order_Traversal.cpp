class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL)
            return {};
        vector<vector<int>> ans;
        queue<TreeNode* > q;
        q.push(root);
        bool f = false;
        while(!q.empty())
        {
            int n = q.size();
            vector<int> level;
            for(int i = 0 ; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                if(node -> left)
                    q.push(node -> left);
                if(node -> right)
                    q.push(node -> right);
                level.push_back(node -> val);
            }
            if(f)
                reverse(level.begin(), level.end());
            ans.push_back(level);
            f = !f;
        }
        return ans;   
    }
};