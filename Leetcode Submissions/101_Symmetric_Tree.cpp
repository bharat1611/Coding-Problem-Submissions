class Solution {
public:
    bool check(TreeNode *left, TreeNode *right)
    {
        if(!left && !right) 
            return true;
        
        if(!left || !right)
            return false;
        
        if(left -> val != right -> val)
            return false;
        
        return check(left -> right, right -> left) && check(left -> left, right -> right);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) 
            return true;
        
        return check(root -> left, root -> right);
        
    }
};