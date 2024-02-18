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
    int ans = 0;
    void path(TreeNode *root, int curr){
        if(root == NULL)
            return;
        curr = curr * 2 + root ->val;
        if(!root->left and !root->right){
            ans += curr;
            return;
        }
        path(root -> left, curr);
        path(root ->right, curr);
    }
    int sumRootToLeaf(TreeNode* root) {
        int curr = 0;
        path(root, curr);
        return ans;
    }
};