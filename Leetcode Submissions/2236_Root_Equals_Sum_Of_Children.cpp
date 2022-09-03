class Solution {
public:
    bool checkTree(TreeNode* root) {
        int child_sum = (root -> left -> val) + (root -> right -> val);
        return root -> val == child_sum;
    }
};