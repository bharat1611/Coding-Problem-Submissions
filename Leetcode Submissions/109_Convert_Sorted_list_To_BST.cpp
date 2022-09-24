class Solution {
public:
    TreeNode *helper(vector<int> &nums, int start, int end)
    {
        while(start <= end)
        {
            int mid = (start + end)/2;
            TreeNode *node = new TreeNode(nums[mid]);
            node -> left = helper(nums, start, mid - 1);
            node -> right = helper(nums, mid + 1, end);
            return node;
        }
        return NULL;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> ans;
        while(head)
        {
            ans.push_back(head -> val);
            head = head -> next;
        }
        return helper(ans, 0, ans.size() - 1);
    }
};