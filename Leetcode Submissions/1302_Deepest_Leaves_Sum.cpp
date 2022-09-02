class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if(root == NULL)
            return root -> val;
        
        queue<TreeNode *> q;
        q.push(root);
        int sum = 0;
        while(!q.empty())
        {
            int n = q.size();
            sum = 0;
            for(int i = 0 ; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                if(node -> left)
                    q.push(node->left);
                if(node -> right)
                    q.push(node -> right);
                sum += node -> val;
            }
        }
        return sum;
    }
};