class Solution {
public:
    vector<int> ans;
    void helper(Node * root)
    {
        if(root == NULL)
            return;
        for(int i = 0 ; i < (root -> children).size(); i++)
        {
            helper(root -> children[i]);
        }
        ans.push_back(root -> val);
    }
    vector<int> postorder(Node* root) {
        helper(root);
        return ans;
    }
};