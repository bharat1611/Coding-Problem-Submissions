class Solution {
public:
    vector<int> v;                  // vector to store inorder traversal of BST
    void helper(TreeNode *root)     // recursive function to perform inorder traversal of BST
    {
        if(root == NULL)
            return;
        helper(root -> left);
        v.push_back(root -> val);
        helper(root -> right);
    }
    
    bool isValidBST(TreeNode* root) {
        helper(root);
        
        // if v is sorted, means tree is valid BST, otherwise it isn't
        
        for(int i = 0 ; i < v.size() - 1;i++)
        {
            if(v[i] >= v[i + 1])          // return false, if v is unsorted
                return false;
        }
        return true;               // true if sorted   
    }
};


class Solution {
public:
    bool isBST(TreeNode* root, long low, long high)
    {   
        if(root == NULL)
            return true;
        if(root -> val <= low or root -> val >= high)
            return false;
        return isBST(root-> left, low, root-> val) and isBST(root -> right, root -> val, high);
    }
    bool isValidBST(TreeNode* root) {
        if(root == NULL)
            return true;
          
        return isBST(root -> left, LONG_MIN, root -> val) and isBST(root -> right, root -> val, LONG_MAX);
    }
};