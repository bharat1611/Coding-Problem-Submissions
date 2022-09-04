class Solution {
public:
    void getVerticalOrder(TreeNode *root, int row, int col, map<int, vector<pair<int, int>>> &mp)
    {
        if(root == NULL)
            return;
        if(mp.find(col) != mp.end())
        {
            mp[col].push_back({row, root -> val});
            sort(mp[col].begin(), mp[col].end());
        }
        else
        {
            vector<pair<int, int>> temp;
            temp.push_back({row, root -> val});
            mp[col] = temp;
        }
        if(root -> left)
            getVerticalOrder(root -> left, row + 1, col - 1, mp);
        if(root -> right)
            getVerticalOrder(root -> right, row + 1,col + 1, mp);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<pair<int, int>>> mp;
        getVerticalOrder(root, 0, 0, mp);
        vector<vector<int>> ans;
        vector<int> level;
        for(auto i : mp)
        {
            for(auto j : i.second)
            {
                level.push_back(j.second);
            }
            ans.push_back(level);
            level.clear();
        }
        return ans;
    }
};