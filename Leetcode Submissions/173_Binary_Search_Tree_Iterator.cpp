class BSTIterator {
public:
    vector<int> v;
    int index = 0;
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    void inorder(TreeNode *root)
    {
        if(root == NULL)
        {
            return;
        }
        inorder(root -> left);
        v.push_back(root-> val);
        inorder(root -> right);
        
    }
    int next() {
        return v[index++];
    }
    
    bool hasNext() {
        return index < v.size();
    }
};