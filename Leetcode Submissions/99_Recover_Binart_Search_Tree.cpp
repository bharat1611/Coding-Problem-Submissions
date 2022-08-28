class Solution {
public:
    vector<TreeNode*> v;
    void helper(TreeNode *root)
    {
        if(root == NULL)
            return;
        
        helper(root -> left);
        v.push_back(root);
        helper(root -> right);
    }
    void recoverTree(TreeNode* root) {
        helper(root);
        for(auto i : v)
            cout << i->val << " " ;
        
        for(int i =0 ;i < v.size(); i++)
        {
            for(int j = i + 1; j < v.size(); j++){
                if(v[i] -> val > v[j] -> val)
                    swap(v[i] -> val, v[j] ->val);
            }        
        }
        cout << endl;
    }
};