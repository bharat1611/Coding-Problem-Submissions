class Solution {
public:
    vector<int> v;
    void helper(TreeNode* root, string curr)
    {
        if(root -> left == NULL and root -> right == NULL)
        {
            curr += to_string(root -> val);
            v.push_back(stoi(curr));
            curr = "";
        }
        else
        {
            curr += to_string(root -> val);
            if(root -> left)
                helper(root -> left, curr);
            if(root -> right)
                helper(root -> right, curr);
        }
    }
    int sumNumbers(TreeNode* root) {
        helper(root, "");
        int sum = 0;
        for(int i = 0 ;i < v.size(); i++)
        {
            sum += v[i];
        }
        return sum;
    }
};