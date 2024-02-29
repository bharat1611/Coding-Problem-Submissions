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
    bool isEvenOddTree(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while(!q.empty())
        {
            int n = q.size();
            int prev = INT_MIN;
            int nxt = INT_MAX;
            if(level == 0)
            {
                for(int i = 0 ; i < n; i++)
                {
                    TreeNode* curr = q.front();
                    q.pop();
                    if(curr->val > prev and curr->val%2 == 1){
                        prev = curr->val;
                    }
                    else
                       return false;
                    if(curr->left) q.push(curr->left);
                    if(curr -> right)  q.push(curr -> right);
                    level = 1;
                }
            }
            else if(level == 1)
            {
                for(int i = 0 ; i < n; i++)
                {
                    TreeNode* curr = q.front();
                    q.pop();
                    if(curr->val < nxt and curr->val%2 == 0){
                        nxt = curr->val;
                    }
                    else
                        return false;
                    if(curr->left) q.push(curr->left);
                    if(curr -> right)  q.push(curr -> right);
                    level = 0;
                }
            }
        }
        return true;
    }
};