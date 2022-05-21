#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> v;
    void preorder(TreeNode * rt)
    {
        if(rt == NULL) return;
        else
        {
            v.push_back(rt -> val);
            preorder(rt -> left);
            preorder(rt -> right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return v;   
    }
};