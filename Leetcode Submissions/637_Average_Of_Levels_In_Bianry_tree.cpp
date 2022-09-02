class Solution {
public:
    vector<double> ans;
    void helper(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        long sum = 0;
        while(!q.empty())
        {
            int n = q.size();
            sum = 0;
            for(int i = 0 ; i < n ;i++)
            {
                TreeNode *node = q.front();
                q.pop();
                
                if(node -> left)
                    q.push(node -> left);
                if(node -> right)
                    q.push(node -> right);
                sum += node -> val;
            }
            ans.push_back((double)sum/n);
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        helper(root);
        return ans;
    }
};