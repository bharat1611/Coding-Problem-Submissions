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

class Solution {
public:
    vector<pair<long, int>> v;
    void helper(TreeNode *root, int level)
    {
        if(root == NULL)
            return;
        int a = root -> val;
        if(v.size() <= level)
            v.push_back({a, 1});
        else
        {
            v[level].first += a;
            v[level].second++;
        }
        helper(root -> left, level + 1);
        helper(root -> right, level + 1);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        helper(root, 0);
        vector<double> ans;
        for(int i = 0 ; i < v.size(); i++)
        {
            ans.push_back((double)v[i].first/v[i].second);
        }
        return ans;
    }
};