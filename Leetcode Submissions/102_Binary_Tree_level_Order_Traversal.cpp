class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        if(root == NULL)
            return ans;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<int> level;
            for(int i = 0 ; i < n; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node -> left)
                    q.push(node -> left);
                if(node -> right)
                    q.push(node -> right);
                level.push_back(node -> val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};


class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(TreeNode *root, int level)
    {
        if(ans.size() == level){
            ans.push_back({root -> val});
        }
        else if(ans.size() > level)
        {
            ans[level].push_back(root -> val);
        }
        
        if(root -> left)
            helper(root -> left, level + 1);
        if(root -> right)
            helper(root -> right, level + 1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL)
            return {};
        helper(root, 0);
        return ans;
    }
};