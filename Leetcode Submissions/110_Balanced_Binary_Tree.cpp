class Solution {
public:
    int helper(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        int left = helper(root -> left);
        if(left == -1)
            return -1;
        int right = helper(root -> right);
        if(right == -1)
            return -1;
        if(abs(left - right) > 1)
            return -1;
        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
        
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            for(int i = 0 ; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                int check = helper(node);
                if(check == -1)
                    return false;
                if(node -> left)
                    q.push(node -> left);
                if(node -> right)
                    q.push(node -> right);
            }
        }
        return true;
    }
};
