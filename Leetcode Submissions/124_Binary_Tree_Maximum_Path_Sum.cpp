// class Solution {
// public:

//     int sumPath(TreeNode *root)
//     {
//         if(root == NULL){
//             return 0;
//         }
//         int left = sumPath(root -> left);
//         int right = sumPath(root -> right);
//         int ans = max(root -> val, max(root -> val + left + right, root -> val + max(left, right)));
//         return ans;
//     }
//     int maxPathSum(TreeNode* root) {

//         if(root == NULL)
//             return 0;
//         int ans = INT_MIN;
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty())
//         {
//             int n = q.size();
//             for(int i = 0 ;  i < n; i++)
//             {
//                 TreeNode *node = q.front();
//                 q.pop();
//                 int curr = sumPath(node);
//                 ans = max(ans, curr);
//                 if(node -> left)
//                     q.push(node -> left);
//                 if(node -> right)
//                     q.push(node -> right);
//             }
//         }
//         return ans;
//     }
// };

class Solution
{
public:
    int ans = INT_MIN;
    int helper(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        ans = max(ans, left + right + root->val);
        return max({left + root->val, right + root->val, 0});
    }
    int maxPathSum(TreeNode *root)
    {
        helper(root);
        return ans;
    }
};