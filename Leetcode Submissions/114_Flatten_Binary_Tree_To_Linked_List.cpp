#include <bots/stdc++.h>
using namespace std;

class Solution {
public:
    vector<TreeNode *> v;
    void add(TreeNode *root)
    {
        if(root == NULL)
        {
            return;
        }
        v.push_back(root);
        add(root -> left);
        add(root -> right);

    }
    void flatten(TreeNode* root) {
        if(root == NULL){
            return;
        }
        add(root);
        int i = 1;
        while(i < v.size())
        {
            root -> left = NULL;
            root -> right = v[i];
            root = root -> right;
            i++;
        }
    }
};