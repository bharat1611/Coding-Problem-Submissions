class Solution {
public:
    TreeNode* helper(vector<int> &nums, int start, int end)
    {
        while(start <= end)
        {
            int mid = (start + end)/2;
            TreeNode *root = new TreeNode(nums[mid]);
            root -> left = helper(nums, start, mid - 1);
            root -> right = helper(nums, mid + 1, end);
            return root;
        }
        return NULL;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *root = helper(nums, 0, nums.size() - 1);
        return root;
    }
};