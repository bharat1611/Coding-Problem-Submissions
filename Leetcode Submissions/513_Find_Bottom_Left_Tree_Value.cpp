class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(root == NULL)
            return 0;
        vector<vector<int>> v;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> level;
            int n = q.size();
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
            v.push_back(level);
        }
        int n = v.size();
        return v[n - 1][0];  
    }
};