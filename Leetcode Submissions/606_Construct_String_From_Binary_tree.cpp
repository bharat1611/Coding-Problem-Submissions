class Solution {
public:
    string helper(TreeNode *root)
    {
        if(root == NULL){
            return "";
        }
        string s = to_string(root -> val);
        if(root -> left || root -> right)
        {
            s.push_back('(');
            s += helper(root -> left);
            s.push_back(')');
        }
        if(root -> right)
        {
            s.push_back('(');
            s += helper(root -> right);
            s.push_back(')');
        }
        return s;
    }
    string tree2str(TreeNode* root) {
        return helper(root);
    }
};