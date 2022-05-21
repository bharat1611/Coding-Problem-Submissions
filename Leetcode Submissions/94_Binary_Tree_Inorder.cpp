#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> v;
    void inorder(TreeNode *rt)
    {
        if(rt == NULL) return;
        else
        {
            inorder(rt -> left);
            v.push_back(rt -> val);
            inorder(rt -> right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return v;   
    }
};