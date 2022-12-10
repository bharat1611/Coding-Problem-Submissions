class Solution
{
public:
    vector<int> arr;

    int dfs(TreeNode *node)
    {
        if (not node)
            return 0;
        int cur = arr.size();
        arr.push_back(node->val);
        arr[cur] += dfs(node->left) + dfs(node->right);
        return arr[cur];
    }

    int maxProduct(TreeNode *root)
    {
        int modval = 1e9 + 7;
        long long ans = 0;
        dfs(root);
        for (int i : arr)
            ans = max((long long)i * (arr[0] - i), ans);
        return ans % modval;
    }
};