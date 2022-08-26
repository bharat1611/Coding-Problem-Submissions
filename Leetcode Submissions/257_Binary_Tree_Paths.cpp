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
    vector<string> v;
    void helper(TreeNode *root, string curr)
    {
        if(root -> left == NULL and root -> right == NULL)
        {
            curr += to_string(root -> val);
            v.push_back(curr);
            curr = "";
        }
        else
        {
            curr += to_string(root -> val) + "->";
            if(root -> left)
                helper(root -> left, curr);
            if(root -> right)
                helper(root -> right, curr);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        helper(root, "");
        
        return v;
        
    }
};