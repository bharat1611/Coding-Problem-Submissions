#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> postorder;
    void helper(TreeNode *root)
        {
            if(root == NULL)
                return;
            else
            {
                helper(root -> left);
                helper(root -> right);
                postorder.push_back(root -> val);
            }
        }
    vector<int> postorderTraversal(TreeNode* root) {
        helper(root);
        return postorder;
    }
};