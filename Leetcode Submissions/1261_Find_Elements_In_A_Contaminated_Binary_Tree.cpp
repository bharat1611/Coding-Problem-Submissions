class FindElements {
public:
    set<int> mp;
    
    void calc(TreeNode *root, int &r)
    {
        if(!root)
            return;
        
         if(r == -1){
            root -> val = 0;
             r = 10;
             mp.insert(0);
        }
        
        if(root -> left){
            root -> left -> val = 2*root->val + 1;
            mp.insert(root->left->val);      
        }
        if(root -> right)
        {
            root -> right -> val = 2*root->val + 2;
            mp.insert(root->right->val);
        }
        calc(root -> left, r);
        calc(root -> right, r);
    }
    
    FindElements(TreeNode* root) {
       int r = -1;
        calc(root, r);
        
    }
    
    bool find(int target) {

        if(mp.find(target) != mp.end())
            return true;
        return false;
        
    }
};