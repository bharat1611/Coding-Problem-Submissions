
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string result;
    void solve(TreeNode *root, string curr)
    {
        if(root -> left == NULL and root -> right == NULL)
        {
            curr += (root->val + 'a');
            reverse(curr.begin(), curr.end());

            if(curr.length() > 0 and result > curr)
                result = curr;
        }

        curr += (root -> val + 'a');

        if(root-> left)
            solve(root -> left, curr);
        if(root -> right)
            solve(root -> right, curr);
    }

    string smallestFromLeaf(TreeNode* root) {
        
        result = 'z' + 1;
        solve(root, "");
        return result;  
    }
};