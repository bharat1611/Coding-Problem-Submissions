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
    void findseq(TreeNode *root, vector<int> &v1)
    {
        if(root == NULL)
            return;
        if(root -> left == NULL and root -> right == NULL)
        {
            v1.push_back(root -> val);
            return;
        }
        findseq(root -> left, v1);
        findseq(root -> right, v1);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        findseq(root1, v1);
        findseq(root2, v2);
        // return v1 == v2;
        int i = 0, j = 0;
        while(i < v1.size() and j < v2.size())
        {
            if(v1[i] != v2[j])
                return false;
            i++;
            j++;
        }
        if(i != v1.size() || j != v2.size())
            return false;
        return true;
    }
};