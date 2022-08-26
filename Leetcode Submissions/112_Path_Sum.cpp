#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> v;
    void helper(TreeNode *root, int num)
    {
        if(root -> left == NULL and root -> right == NULL)
        {
            num += root -> val;
            v.push_back(num);
            num = 0;
        }
        num += root -> val;
        if(root -> left)
            helper(root -> left, num);
        if(root -> right)
            helper(root -> right, num);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
            return false;
        
        helper(root, 0);
        
        for(int i = 0 ; i < v.size(); i++)
        {
            if(v[i] == targetSum)
                return true;
        }
        return false;
    }
};