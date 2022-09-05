class Solution {
public:
    vector<int> ans;
    void helper(Node *root)
    {
        if(root == NULL)
            return;
        ans.push_back(root -> val);
        for(int i = 0 ; i < (root -> children).size(); i++)
        {
            helper((root -> children)[i]);
        }
    }
    vector<int> preorder(Node* root) {
        helper(root);
        return ans;
    }
};